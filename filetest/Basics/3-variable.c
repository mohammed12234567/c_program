#include <stdio.h>

int main(){


    // variable = declaration + initialisation 

    int x;  // declaration
    x = 123;  // initialisation
    int y = 321; // declaration + initialisation


    int age = 21; // integer
    float gpa = 2.05; // floating point number
    char grade = 'c'; //single character
    char name[] = "MED"; // array of character

    printf("Hello %s\n",name);
    printf("You are %d years old\n" ,age);
    printf("My grade is %c \n", grade);
    printf("My gpa is %2.f\n", gpa);

    // declaration value int = %d
    // declaration value float = %f
    // declaration value chart single characler = %c
    // declaration value chart array of character = %s

    return 0;
}