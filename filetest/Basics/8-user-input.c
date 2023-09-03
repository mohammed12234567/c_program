#include <stdio.h>
#include <string.h>

int main(){

	int age;
	char name[25];

    printf("what is your name ?\n");
	//scanf("%s", &name);                 // without white space 
    fgets(name, 25, stdin);              // with the space white

	printf("what is your age ?\n");
	scanf("%d", &age);    

	printf("\nHello %s, how are you doing\n", name);
	printf("You are %d years old\n", age);

	return 0;
}