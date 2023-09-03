#include <stdio.h>

int main(){

    // logical operator = || (OR) check if at least one condition is true

    float temp = 90;

    if(temp <= 0 || temp >= 25){
        printf("The weather is good\n");
    }
    else{
        printf("The weather is bad\n");
    }

    return 0;
    
}