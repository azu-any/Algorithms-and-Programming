#include <stdio.h>

int potencia(int x, int n);

int main(void) {
    int x, n;
    
    printf("Base:\n");
    scanf("%d", &x);
    
    printf("Exponente:\n");
    scanf("%d", &n);

    printf("Resultado: %d", potencia(x, n));
    
  return 0;
}

int potencia(int x, int n)
{
    int res;
    if(n == 0)
    {
        res = 1;
    }
    else
    {
        res = x * potencia(x, n-1);
    }
    return res;
}
