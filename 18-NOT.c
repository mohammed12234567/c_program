#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operator = ! (NOT) reserves the state of a condition

    bool sunny = true;

    if(!sunny){
        printf("It's cloudy outside!\n");
    }
    else{
        printf("It's sunny outside!\n");
    }

    return 0;
    
}