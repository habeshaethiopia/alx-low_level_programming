#!/bin/bash
 gcc -shared -fPIC -o libmyrand.so mylib.c
 LD_PRELODE=./libmyrand.so ./gm 9 8 10 24 75 9