#!/bin/bash
gcc --shared -o /tmp/librand.so mylib.c 
export LD_PRELOAD=/tmp/librand.so