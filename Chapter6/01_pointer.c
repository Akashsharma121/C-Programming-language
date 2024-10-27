#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to j (j is an integer pointer)
    int k = 77;
    printf("The address of i is: %u\n", &i);
    printf("The address of i is: %u\n", j);
    printf("The address of i is: %u\n", &k);

    printf("The value at address j is %d\n", *(&i));
    return 0;
}