#!/bin/bash
gcc -fPIC -shared -o liball.so src/*.c -I./include
