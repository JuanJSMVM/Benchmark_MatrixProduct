# Contenido.
- La carpeta soluciones contiene 4 subdirectorios que a su vez estan divididos en otros 4 subdirectorios cada uno.
  Estos contienen los archivos txt que almacenan información de los 30 tiempos obtenidos en su correspondiente benchmark.
  Cada carpeta esta marcada, segun el tipo de dato de los elementos de la matriz y su modo de inicialización.

- A continuación se presentan la descripción de los ficheros encontrados:
    >
    >mm_main.c: Es la función principal que ejecuta la multiplicación de matrices con elementos del tipo entero, inicializados con valores determinados.
    Ádemas, retorna el tiempo que demora en realizar esta operación.
    >
    >mm_main_rnd.c: Es la función principal que ejecuta la multiplicación de matrices con elementos del tipo entero, inicializados de manera aleatoria.
    Ádemas, retorna el tiempo que demora en realizar esta operación.
    >
    >mm_main_double.c: Es la función principal que ejecuta la multiplicación de matrices con elementos del tipo double, inicializados con valores determinados.
    Ádemas, retorna el tiempo que demora en realizar esta operación.
    >
    >mm_main_double_rnd.c: Es la función principal que ejecuta la multiplicación de matrices con elementos del tipo double, inicializados de manera aleatoria.
    Ádemas, retorna el tiempo que demora en realizar esta operación.
    >
    >mm_lib.h: Declara las distintas funciones y estructuras a usar en los benchmarks.
    >
    >mm_lib.c: Contiene la implementación de cada una de las funciones contenidas en el archivo con extensión .h
    >
    >Makefile: Contiene las órdenes que debe ejecutar la utilidad make , así como las dependencias entre los distintos módulos del programa.
    >
    >lanzador_double.pl: Script que ejecuta el fichero mm_main_double.c, variando las dimensiones de las matrices. Ademas, almacena cada Benchmark realizado en un archivo txt en la carpeta Soluciones.
    >
    >lanzador_double_rnd.pl: Script que ejecuta el fichero mm_main_double_rnd.c, variando las dimensiones de las matrices. Ademas, almacena cada Benchmark realizado en un archivo txt en la carpeta Soluciones.
    >
    >lanzador_int.pl: Script que ejecuta el fichero mm_main.c, variando las dimensiones de las matrices. Ademas, almacena cada Benchmark realizado en un archivo txt en la carpeta Soluciones.
    >
    >lanzador_int_rnd.pl: Script que ejecuta el fichero mm_main_rnd.c, variando las dimensiones de la matriz. Ademas, almacena cada Benchmark realizado en un archivo txt en la carpeta Soluciones.
# Modo de uso.
1. Abrir la consola.
2. Moverse a la carpeta del programa que desea ejecutar: `cd <nombre_de_carpeta>`
3. Ejecutar el siguiente comando: `make all`.
4. Usar el ejecutable usando: `./*_main`. Siendo '\*' el nombre del archivo main del ejercicio.
5. Si se desea realizar los Benchmarks de manera automatica, se ejecuta en su lugar el lanzador especifico del siguiente modo: `./*.pl`.Siendo '\*' el nombre del lanzador dado.