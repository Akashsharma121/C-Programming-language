#include<stdio.h>

int main(){
    // int length = 3;
    // int breadth = 6;

    int length, breadth;

    printf("Enter the length \n", length);
    scanf("%d", &length);

    printf("Enter the breadth \n", breadth);
    scanf("%d", &breadth);
    printf("The area of rectangle is %d", length*breadth);
    return 0;
}