#!/bin/bash
wget -P /tmp https://github.com/Elidemuk7/alx-low_level_programming/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="/tmp/libdynamic.so"
