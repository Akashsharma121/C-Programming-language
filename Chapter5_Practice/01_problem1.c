#include<stdio.h>

float average(int ,int ,int );

float average(int a,int b,int c){
    float avg = (a+b+c)/3;
    printf("The average of this numbers is %.2f\n",avg);
    return avg;
}
int main(){
    average(34,33,65);
    return 0;
}