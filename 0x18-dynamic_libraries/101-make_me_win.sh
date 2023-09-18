#!/bin/bash
wget -P /tmp https://github.com/Pop2323/alx-low_level_programming/raw/master/0x18-dynamic_libraries/Giga.so
export LD_PRELOAD=/tmp/Giga.so
