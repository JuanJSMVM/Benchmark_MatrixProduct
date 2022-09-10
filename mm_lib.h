/*************************************************
*Fecha: 10-septiembre-2022
*Autor: Juan Manuel Vasquez, Paula Sofía Godoy y Juan Pablo Barrios 
*Materia: Parallel and Distribuited Computing
*Tema: Biblioteca de funciones para  Multiplicación de matrices
**************************************************/

#ifndef MM_LIB_H_INCLUDED
#define MM_LIB_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


void inicializacion_mm_int(int *a, int *b, int *c, int N);
void multiplicacion_mm_int(int *a, int *b, int *c, int N);
void punto_prueba_inicial();
void punto_prueba_final();
void impresion_mm_int(int *matriz, int N);
int random_int();
void inicializacion_mm_int_rnd(int *a, int *b, int *c, int N);
void inicializacion_mm_double_rnd(double *a, double *b, double *c, int N);
double random_double();
void multiplicacion_mm_double(double *a, double *b, double *c, int N);
void impresion_mm_double(double *matriz, int N);
void inicializacion_mm_double(double *a, double *b, double *c, int N);

#endif