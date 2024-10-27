#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to j (j is an character pointer)
    
    float k = 34.34;
    float* k1 = &k;
    printf("The address of i is: %u\n", &i);
    printf("The address of i is: %u\n", j);
    printf("The address of i is: %u\n", &k);

    printf("The value at address j is %c\n", *j);
    return 0;
}