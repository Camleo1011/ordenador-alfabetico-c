// Programa que recibe una serie de palabras y las ordena alfabeticamente
#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

int main(int argc, char *argv[])
{
    int n = argc - 1;
    // Validar input
    if (n < 1)
    {
        printf("Uso: ./ordenar palabra1 palabra2 ...\n");
        return 1;
    }

    // Copiar palabras
    char *palabras[n];
    for (int i = 0; i < n; i++)
    {
        palabras[i] = my_strdup(argv[i + 1]);
        if (palabras[i] == NULL)
        {
            for (int k = 0; k < i; k++)
            {
                free(palabras[k]);
            }
            return 1;
        }    
    }

    // Ordenar palabras
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (my_strcmp(palabras[j], palabras[j + 1]) > 0)
            {
                char *tmp = palabras[j];
                palabras[j] = palabras[j + 1];
                palabras[j + 1] = tmp;
            }
        }   
    }

    // Imprimir
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", palabras[i]);
    }

    //Liberar memoria
    for (int i = 0; i < n; i++)
    {
        free(palabras[i]);
    }
    return 0;
}