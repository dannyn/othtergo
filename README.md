Othtergo Keyboard Firmware
======================
This firmware is a modified version of the firmware for the GH60 written using the [TMK Collection](https://github.com/tmk/tmk_keyboard). The keyboard itself is an ortholinear version of Truly Ergonomic.


## Resources
- [Project page for the gh60](http://blog.komar.be/projects/gh60-programmable-keyboard/)
- [Excellent wiring instructions](http://wiki.geekhack.org/index.php?title=Hard-Wiring_How-To)
- [Build your own firmware part 1](http://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html)
- [Build your own firmware part 2](http://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html#p141386)
- [Ortholiner layout](http://www.keyboard-layout-editor.com/#/layouts/95f9b9fb26a9f0d530956252f3318951)
- [Staggered layout](http://www.keyboard-layout-editor.com/#/layouts/19912d365409519edea7536290facf9f)

## Build
First grab the submodule for TMK.

    $ git submodule init 
    $ git submodule update

Then just run make.

    $ make

You will need avr-gcc installed. If you have teensy\_loader\_cli you can do 

    $ make teensy

To load the firmware onto the keyboard. You can alternatively use the teensy program available from pjrc's website.

There are other targets which may or may not be relevant, see the Makefile for more info.

## Layout
There are a series of images in doc/ which show the layout along with the rows and columns of the matrix.

The defaults for the pins are.

    col: 0   1   2   3   4   5   6   7   8   9   10  11  12  13  14
    pin: F1  F4  D1  D2  D3  C6  C7  D6  D7  B4  B5  B6  F7  F6  F5
    row: 0   1   2   3   4   5
    pin: B0  B1  B2  B3  B7  D0

## License
**GPLv2** or later.
