#include<stdio.h>

void change_ten_times(int);

void change_ten_times(int x){
    x = x * 10;
}
int main(){
    int a = 4;
    printf("The vaule of x is %d\n", a);
    change_ten_times(a);
    printf("The vaule of x is %d", a);
    return 0;
}