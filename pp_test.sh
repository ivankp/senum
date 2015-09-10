#!/bin/bash

# sed '/^#/d;/^$/d;s/; /;\n/g'

g++ -E -Dsenum_pp_test test.cc \
| sed '/^#/d;/^$/d' \
| indent -st -bap -br -brf -brs -bli0 -i4 -l79 -ncs -npcs -npsl -fca -lc79 -fc1
