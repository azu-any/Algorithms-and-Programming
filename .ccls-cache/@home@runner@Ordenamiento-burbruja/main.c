#include <stdio.h>

int main(void) {
    int i, j, temp;
    int n = 5;
    int arreglo[5] = {5, 9, 4, 3, 7};
    for(i=0; i<n; i++)
    {
        printf("%d\t", arreglo[i]);
    }
    printf("\n");
    
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arreglo[j]>arreglo[j+1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        printf("%d\t", arreglo[i]);
    }
    
  return 0;
}