#include <stdio.h>

int factorial(int num);

int main(void) 
{
    int x;
    
    printf("Número:\n");
    scanf("%d", &x);

    printf("Factorial de %d es %d", x, factorial(x));
  
    return 0;
}

int factorial(int num)
{
    int fact;

    if(num == 1)
    {
        fact = 1;
    }
    else
    {
        fact = num * factorial(num - 1);
    }
    return fact;
}
