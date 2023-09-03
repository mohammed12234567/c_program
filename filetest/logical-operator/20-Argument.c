#include <stdio.h>

void birthday(char name[], int age)
{
    printf("Happy birthday dear %s !\n", name);
    printf("You are %d years old\n", age);
    
}

int main(){

    char name[] = "MED";
    int age = 23;

    birthday(name, age);

    return 0;
}