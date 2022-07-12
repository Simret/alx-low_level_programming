#!/bin/bash
wget -q -o /tmp/libtest.so https://github.com/simret/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD =/tmp/libtest.so
