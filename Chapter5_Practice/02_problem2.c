#include<stdio.h>

int celsiustofahrenheight(float celsius);

int celsiustofahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}
int main(){
    float celsius, fahrenheit;
    
    printf("Enter celcius ");
    scanf("%f", &celsius);
    fahrenheit = celsiustofahrenheit(celsius);
    printf("The fahrenheit is %.2f", fahrenheit);

    return 0;
}