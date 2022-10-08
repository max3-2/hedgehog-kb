# hedgehog-lite

![hedgehog-lite](https://imgur.com/a/vMM5kzg)

*A shaped 60-ish keyboard with a soft felt mount*

* Keyboard Maintainer: [Max Elfner](https://github.com/Max Elfner)
* Hardware Supported: Custom PCB with QMK support build on Mega32u4

Make example for this keyboard (after setting up your build environment):

    make hedgehog-lite:default

Flashing example for this keyboard:

    make hedgehog-lite:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the PCB below the spacebar
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
