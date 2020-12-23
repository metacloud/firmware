# Touchpad module firmware

This directory contains the firmware of the touchpad module.

Unlike other modules, the touchpad modules doesn't contain a microcontroller,
but an Azoteq IQS572 touchpad controller IC. The IC runs a special firmware
generated by the [Azoteq IQS5XX B000 PC Software](https://www.azoteq.com/design/software-and-tools/)
which runs on Windows.

The firmware can be programmed with the Azoteq CT210A USB Dongle Programmer.