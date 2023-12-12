#include <stdio.h>
#include <string.h>
#define MAX 100

void mezclarCadenas(char *cad1, char *cad2, int pos);

int main() {
    char cadena1[MAX];
    char cadena2[MAX];
    int numero;

    printf("Ingrese la primera cadena de texto\n");
    gets(cadena1);

    printf("Ingrese la segunda cadena de texto\n");
    gets(cadena2);

    printf("Ingrese un numero\n");
    scanf("%d", &numero);

    mezclarCadenas(cadena1, cadena2, numero);

    // Imprimir la cadena1 modificada
    printf("Cadena modificada: %s\n", cadena1);

    return 0;
}

void mezclarCadenas(char *cad1, char *cad2, int pos) {
    int tamanio1 = strlen(cad1);
    int tamanio2 = strlen(cad2);

    if (pos >= 0 && pos <= tamanio1) {
        // Desplazar los caracteres de cad1 a la derecha para hacer espacio para cad2
        for (int i = tamanio1; i >= pos; i--) {
            cad1[i + tamanio2] = cad1[i];
        }

        for (int i = pos, j = 0; j < tamanio2; i++, j++) {
            cad1[i] = cad2[j];
        }
    } else {
        printf("Posición no válida. La posición debe estar entre 0 y %d.\n", tamanio1);
    }
}

