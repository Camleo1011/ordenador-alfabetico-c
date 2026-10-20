#include <stdlib.h>
#include <stdio.h>
#include "my_functions.h"

int my_strlen(char *s)
{
    int contador = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        contador++;
    }

    return contador;
}

void my_strcpy(char *destino, char *origen)
{
    for (int i = 0, t = my_strlen(origen); i <= t; i++)
    {
        destino[i] = origen[i];
    } 
}

int my_strcmp(char *a, char *b)
{
    int i = 0;
    while (a[i] == b[i] && a[i] != '\0')
    {
        i++;
    }
    return a[i] - b[i];
}

void my_strcat(char *destino, char *origen)
{
    int t_destino = my_strlen(destino);
    int t_origen = my_strlen(origen);
    int t_total = t_destino + t_origen;

    for (int i = t_destino; i <= t_total; i++)
    {
        destino[i] = origen[i - t_destino];
    }
}

char *my_strdup(char *s)
{
    int t = my_strlen(s);
    char *p = malloc(t + 1);
    if (p == NULL)
    {
        fprintf(stderr, "memoria no reservada\n");
        return p;
    }

    my_strcpy(p, s);
    return p;
}

void invertir(char *s)
{
    for (int i = 0, t = my_strlen(s) - 1; i < t; i++)
    {
        char tmp = s[i];
        s[i] = s[t];
        s[t]  = tmp;
        t--;
    }
}