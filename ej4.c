#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cargarNotas(float *notas, int cantidadAlumnos);
void mostrarNotas(float *notas, int cantidadAlumnos);
void calcularPromedios(float *notas, int cantidadAlumnos, float *promedios);

int main(){
    srand(time(NULL));

    int cantidadAlumnos;
    printf("Cuantos alumnos tiene en el curso para cargar las notas? = ");
    scanf("%d", &cantidadAlumnos);

    while (cantidadAlumnos <= 0)
    {
        printf("Cantidad no valida vuelva a ingresar = ");
        scanf("%d", &cantidadAlumnos);
    }
    int alumnos[cantidadAlumnos];
    float notas[cantidadAlumnos];
    float promedios[cantidadAlumnos];

    cargarNotas(notas,cantidadAlumnos);
    mostrarNotas(notas,cantidadAlumnos);
    calcularPromedios(notas,cantidadAlumnos,promedios);

    return 0;
}

void cargarNotas(float *notas, int cantidadAlumnos){
    printf("Ingrese las notas de los alumnos\n");
    for (int i = 0; i < cantidadAlumnos; i++)
    {
        notas[i] = rand() % 11;
    }
    
}
void mostrarNotas(float *notas, int cantidadAlumnos){
    for (int i = 0; i < cantidadAlumnos; i++)
    {
        printf("La nota del %d alumno es = %.2f\n", i+1,notas[i]);
    }
    
}

void calcularPromedios(float *notas, int cantidadAlumnos, float *promedios) {
    float promedioCalculado;
    for (int i = 0; i < cantidadAlumnos; i++)
    {
        promedioCalculado += notas[i];
    }

    promedioCalculado = promedioCalculado / cantidadAlumnos;
    
    printf("La nota promedio del curso es %.2f\n",promedioCalculado);
}