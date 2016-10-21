#include <iostream>
#include "Arreglo.h"

using namespace std;

Arreglo::Arreglo(const Punto arreglo_puntos[], const int tamanio)
{
    largo = tamanio;
    punto = new Punto[largo];
    int i;
    for(i = 0; i != tamanio; ++i){
        punto[i] = arreglo_puntos[i];
    }
}

Arreglo :: Arreglo(const Arreglo &Array)
{
    largo = Array.largo;
    punto = new Punto[largo];
    int i;
    for(i = 0; i != largo; ++i){
        punto[i] = Array.punto[i];
    }
}
