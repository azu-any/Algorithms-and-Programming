// Azuany Mila - 177068

#include<stdio.h>

int main()
{
    int n, i, j;
    
    printf("Número de filas y columnas:\n");
    scanf("%d", &n);
    
    int magic[n][n];
    int sum_f[n], sum_c[n], sum_d[2] = {0};
    
    printf("Inserte números de la matriz:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &magic[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t", magic[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<n; i++)
    {
        sum_f[i] = 0;
        for(j=0; j<n; j++)
        {
            sum_f[i] += magic[i][j];
        }
    }
    
    for(j=0; j<n; j++)
    {
        sum_c[j] = 0;
        for(i=0; i<n; i++)
        {
            sum_c[j] += magic[i][j];
        }
    }

    for(i=0; i<n; i++)
    {

        sum_d[0] += magic[i][i];
    }

    for(i=n-1; i>=0; i--)
    {
            sum_d[1] += magic[i][i];
    }

    int res = sum_f[0], cont = 0;
        
    for(i=0; i<n; i++)
    {
        if(sum_f[i] != res)
        {
            cont++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(sum_c[i] != res)
        {
            cont++;
        }
    }
    
    for(i=0; i<2; i++)
    {
        if(sum_d[i] != res)
        {
            cont++;
        }
    }

    if(cont==0)
    {
        printf("Es un cuadrado mágico\n");
    }
    else
    {
        printf("No es un cuadrado mágico\n");
    }
    
    return 0;

}
