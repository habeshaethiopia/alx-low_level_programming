#!/bin/bash
gcc --shared -o /tmp/librand.so mylib.c 
 LD_PRELOAD=/tmp/librand.so
