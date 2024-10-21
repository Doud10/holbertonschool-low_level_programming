#!/bin/bash
int main () {
    char message [] = "Programming is like building a multilingual puzzle"
    write (1, message, sizeof(message));
    return 0; 
    
gcc -o  helloworld 4-puts.c
