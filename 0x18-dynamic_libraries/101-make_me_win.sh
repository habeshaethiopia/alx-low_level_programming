#!/bin/bash
wget https://github.com/habeshaethiopia/alx-low_level_programming/raw/3a25b056b644b9bf96702f97de6f1bb5c07deb93/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=/tmp/librand.so