#include<stdio.h>

int main(){
    int a=4, b=6, c=2, d=8;
    if(a>b && a>c && a>d){
        printf("The greater of all is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greater of all is %d", b);
    }
    else if(c>b && c>a && c>d){
        printf("The greater of all is %d", c);
    }
    else if(d>b && d>c && d>a){
        printf("The greater of all is %d", d);
    }
    return 0;
}