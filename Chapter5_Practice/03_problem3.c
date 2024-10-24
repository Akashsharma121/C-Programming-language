#include<stdio.h>

float force(float mass);

float force(float mass){
    float g = 9.8;
    return mass * g ;
}
int main(){
    float f, mass = 45;
    f = force(mass);
    printf(" Force of Attraction is: %.2f Newtons", f);
    return 0;
}