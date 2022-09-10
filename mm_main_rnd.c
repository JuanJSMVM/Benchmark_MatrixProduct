/*************************************************
*Fecha: 10-septiembre-2022
*Autores: Juan Manuel Vasquez, Paula Sofía Godoy y Juan Pablo Barrios 
*Materia: Parallel and Distribuited Computing
*Tema: Construcción Benchmark Multiplicación de matrices (Inicializacion aleatoria)
**************************************************/
#include "mm_lib.h"
#include <stdio.h>
#include <stdlib.h>

/****
 * Se requiere reservar un espacio de memporia 
****/
#define DATA_SIZE (1024 * 1024 * 64 * 3)
static int MEM_CHUNK[DATA_SIZE];

/****
 * Función principal de la aplicación 
****/
int main(int argc, char **argv){

    int N; 
    N = (int) atof(argv[1]);
    

    /****
     * Declaración de matrices con apuntadores a memoria
    ****/
    int *a, *b, *c;
    a = MEM_CHUNK;
    b =  a + N*N;
    c =  b + N*N;

    //printf("\n\n\t-> Inicializacion con entero aleatorio:\n");
    inicializacion_mm_int_rnd(a, b, c, N);
    impresion_mm_int(a, N);
    impresion_mm_int(b, N);
    

    /****
     * Inicio de toma de tiempo
     * Mulplticación de matrices
     * Fin de toma de tiempo 
    ****/
    punto_prueba_inicial();
    multiplicacion_mm_int(a, b, c, N);
    punto_prueba_final();

    
    
    impresion_mm_int(c, N);
    

    return 0;
}
