#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 print_array.c print_list.c $1 $2 -o a;
