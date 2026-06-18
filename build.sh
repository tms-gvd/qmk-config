#!/usr/bin/env bash
set -euo pipefail

QMK_FIRMWARE="${QMK_FIRMWARE:-$HOME/qmk_firmware}"
KEYBOARD="ferris/sweep"
KEYMAP="pnohty"
CONVERT_TO="helios"
FIRMWARE_NAME="ferris_sweep_${KEYMAP}_${CONVERT_TO}.uf2"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
KEYMAP_LINK="$QMK_FIRMWARE/keyboards/ferris/keymaps/$KEYMAP"
BUILD_OUTPUT="$QMK_FIRMWARE/.build/$FIRMWARE_NAME"
DEST="$SCRIPT_DIR/$FIRMWARE_NAME"

if [[ ! -d "$QMK_FIRMWARE" ]]; then
  echo "error: QMK firmware not found at $QMK_FIRMWARE" >&2
  exit 1
fi

current_link="$(readlink "$KEYMAP_LINK" 2>/dev/null || true)"
if [[ "$current_link" != "$SCRIPT_DIR" ]]; then
  echo "linking keymap: $KEYMAP_LINK -> $SCRIPT_DIR"
  ln -sfn "$SCRIPT_DIR" "$KEYMAP_LINK"
fi

echo "compiling $KEYBOARD / $KEYMAP (CONVERT_TO=$CONVERT_TO)..."
(
  cd "$QMK_FIRMWARE"
  qmk compile -kb "$KEYBOARD" -km "$KEYMAP" -e "CONVERT_TO=$CONVERT_TO"
)

if [[ ! -f "$BUILD_OUTPUT" ]]; then
  echo "error: build output not found at $BUILD_OUTPUT" >&2
  exit 1
fi

if [[ -L "$DEST" || -e "$DEST" ]]; then
  rm -f "$DEST"
fi

cp "$BUILD_OUTPUT" "$DEST"
echo "copied firmware to $DEST"
