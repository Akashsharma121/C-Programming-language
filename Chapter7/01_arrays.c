#include<stdio.h>

int main(){
    int marks[90]; // Reserve space to store the 90 integers

    marks[0] = 45;
    marks[1] = 23;
    // We can go all the way till marks[89]; 
    printf("marks 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}