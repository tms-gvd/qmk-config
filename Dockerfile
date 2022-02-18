FROM qmkfm/qmk_firmware

RUN mkdir /qmk_firmware/keyboards/ferris/keymaps/lassieee

COPY config.h keymap.c rules.mk /qmk_firmware/keyboards/ferris/keymaps/lassieee

RUN qmk compile -kb ferris/sweep -km lassieee
