#include<stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    int  x=2, y=3, z=3, k=1;
    float a = 3*x/y - z+k;
    // a = 3*x/y - z+k;
    // a = 6/y - z+k;
    // a = 2 - z+k;
    // a = -1 + k;
    // a = -1 + 1;
    // a =  0 ;
    printf("the value this equation %f", a);
    return 0;
}