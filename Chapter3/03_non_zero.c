#include<stdio.h>

int main(){
    if(1){
        printf("This if is executed!\n");
    }
    if(834){
        printf("This if is also executed!\n");
    }
    if(2.4){
        printf("This if are also executed!\n");
    }
    if('c'){
        printf("This character inside if is also executed!\n");
    }
    if(0){
        printf("I am zero - I am not executed!\n");
    }

    return 0;
}