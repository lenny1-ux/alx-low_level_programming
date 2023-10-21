#!/bin/bash
wget -q  https://github.com/lenny1-ux/alx-low_level_programming/blob/main/0x18-dynamic_libraries/liblen.so
export LD_PRELOAD=/$PWD/liblen.so
