## Configue

https://config.qmk.fm/#/crkbd/rev1/LAYOUT_split_3x6_3

### Json 2 config

qmk json2c ~/downloads/gregdel.json > keymap.c


## Compile

qmk clean
qmk compile -kb crkbd/rev1 -km gregdel

## Enter flash mode

Use the software toggle both thumbs + bottom left key
OR
Use a jumper cable to connect the reset holes on the board.

## Flash

**Very important**: Do not remove the TTRS cable while powered.

### Left

```bash
qmk flash -kb crkbd/rev1 -km gregdel -bl avrdude-split-left
```

### Right

```bash
qmk flash -kb crkbd/rev1 -km gregdel -bl avrdude-split-right
```
