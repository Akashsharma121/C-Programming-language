#include<stdio.h>
 
 void swap(int*, int*);

 void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
 }

int main(){
    int a = 3, b = 4;
    swap(&a, &b);
    printf("The value of a is %d and b is %d ", a, b);
    return 0;
}