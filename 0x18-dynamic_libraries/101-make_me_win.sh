#!/bin/bash
wget -P /tmp https://github.com/Tassuo7/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrand.so
export LD_PRELOAD=/tmp/nrand.so
