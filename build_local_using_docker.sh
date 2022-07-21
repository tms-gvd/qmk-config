#!/bin/bash

docker run --platform linux/amd64 -d --rm --name qmk qmkfm/qmk_cli sleep 300;
docker exec -it qmk python3 -m pip install qmk
docker exec -it qmk qmk setup -y
docker exec -it qmk qmk env
docker cp lassieee qmk:qmk_firmware/keyboards/ferris/keymaps/
docker exec -it qmk qmk compile -kb ferris/sweep -km lassieee
docker cp qmk:/qmk_firmware/ferris_sweep_lassieee.hex .
docker stop qmk
