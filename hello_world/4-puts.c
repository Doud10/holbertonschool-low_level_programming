#!/bin/bash
cat <<EOF > 4-puts.c
#include <stdio.h>
int main(void) {
puts("Programming is like building a multilingual puzzle");
 return 0;
   }
EOF
gcc -o helloworld 4-puts.c
