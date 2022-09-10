#!/usr/bin/perl
=begin comment
Fecha: 10-septiembre-2022
Autores: Juan Manuel Vasquez, Paula Sofía Godoy y Juan Pablo Barrios 
Tema: Ejecucion Automatizada de Benchmarks
=cut

#Se crean vectores para los ejecutables 
@Benchmarks = ("mm_main_double_rnd");

#Se crean vectores para los ejecutables 
@Cargas = ("313","478","717","956","1195","1434","1673","1912","2151","2390","2629","2868");

#Numero de repeticiones
$n = 30;
$Path = "/home/juanpablo_b/Documentos/Benchmarks/Bench_Serie/";
$Dir = "Soluciones/double_rnd/";

=begin comment
Se itera sobre la cantidad de ejecutables, cargas y repeticiones
=cut

foreach $exes (@Benchmarks){
    foreach $carga (@Cargas){
        #Se crea un fichero para almacenar los datos
        $file = $Dir.$exes."-size-".$carga.".txt";
        #print("$file \n");
        for ($i=0;$i<$n;$i++){
            #print("$Path$exes $carga\n");
            system("$Path$exes $carga >> $file");
        }
        close($file);
    }
}