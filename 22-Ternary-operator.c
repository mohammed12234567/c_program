#include <stdio.h>

// declar fonction

int findmax(int x, int y)
{
    /* Methode ternaru operatore

    if(x > y)
    {
       return x; 
    }
    else
    {
       return y; 
    }
    */


    // Methode 2
    
    return (x > y) ? x : y;
}

int main()
{
    // ternaru operatore = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false 

    int max = findmax(2, 4);

    printf("%d\n", max);

    return 0;

}