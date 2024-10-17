#include<stdio.h>

int main(){
    int age = 45;
    
    if(age>60){
        printf("you can drive and you are senior citizen");
    }

    else if(age>40){
    printf("you can not drive and you are elder");
    }

    else if(age>18){
    printf("you can not drive");
    }
    
    else{
    printf("But you can not drive");
    }

    return 0;
}