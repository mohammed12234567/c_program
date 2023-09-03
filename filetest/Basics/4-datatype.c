#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'c';                // single character %c
    char b[] = "MED";            // array of character %s

    float c = 3.1234;            // 4 bytes (32 bits of precisions) 6-7 digits %f
    double d = 3.123456789;      // 8 bytes (64 bits of precisions) 15-16 digits %lf

    bool e = true;               // 1 byte (true or false) %d

    char f = 100;                // 1 byte (-128 to 127) %d or %c
    unsigned char g = 255;       // 1 byte (0 to +255) %d or %c

    short h = 32767;             // 2 byte (-32768 to +32767) %d
    unsigned short i = 65535;    // 2 byte ( 0 to +65535) %d

    int j = 2147483647;          // 4 byte (-2147483648 to +2147483647) %d
    unsigned int k = 4294967295; // 4 byte (0 to +4294967295) %u

    long long int l = 9223372036854775807;   // 8 byte (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615u; // 8 byte (0 to +18 quintillion) %llu

    
    //printf("%c\n", a);                  // char
    //printf("%s\n", b);                  // charavter array
    //printf("%f\n", c);                  // float
    //printf("%lf\n", d);                 // double
    //printf("%d\n", e);                  // boul
    //printf("%d\n", f);                  // chart as numeric value
    //printf("%d\n", g);                  // usigned as a numeric value
    //printf("%d\n", h);                  // short
    //printf("%d\n", i);                  // usigned short
    //printf("%d\n", j);                  // int 
    //printf("%u\n", k);                  // usigned int
    //printf("%lld\n", l);                // long long int
    //printf("%llu\n", m);                // usigned long long int

    return 0;
}