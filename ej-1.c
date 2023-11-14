#include <stdio.h>
#include <ctype.h>
int main()
{
    char frase[10] = {'a','b','c','d','e','f','g','h','i','j'};
    char *puntero;
    puntero = frase;
    printf("%c\n", puntero[0+5]);//accedo al elemento 2 del array
    printf("%p\n", *&puntero[0+5]); //accedo a la memoria del indice del array
    printf("%p\n", *puntero); //accedo a la memoria del array

    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", puntero[i]);
    }
    
    return 0;
}