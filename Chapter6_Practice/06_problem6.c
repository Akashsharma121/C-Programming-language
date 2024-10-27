#include<stdio.h>

int main(){
    int a = 2;
    int* ptr = &a;
    int** ptr2 = &ptr;
    printf("The address of a is %u\n", a);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", **ptr2);
    return 0;
}