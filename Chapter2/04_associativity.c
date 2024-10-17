#include<stdio.h>

int main(){
    int a = 3;
    int b = 5;
    int c = 8;
    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d\n", 3*b/2*c + 7*a);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 21
    // 15/2*c + 21
    // 7*c + 21
    // 56 + 21
    // 77
    return 0;
}