#!/bin/bash
get -p .. http://raw.githubusercontent.com/Kimmiescott/alx-low_level_programming/main/0x18-dynamic_libraries/libhack.so
export LD-reload="$pwd/../libhack.so"
