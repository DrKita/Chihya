#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=/home/kitakami/arm-eabi-6.0/bin/arm-eabi-

make slte_03_defconfig

make -j8
