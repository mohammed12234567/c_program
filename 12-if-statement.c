#include <stdio.h>

int main(){

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are signed up!\n");
    }
    else if(age == 0){
        printf("You can't signed up! You where just bord!\n");
    }
    else if(age < 0 ){
        printf("Yo haven't been born yet!\n");
    }

    return 0;
}