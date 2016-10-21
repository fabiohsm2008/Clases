#ifndef ARREGLO_H
#define ARREGLO_H
#include "Point.h"

class Arreglo{
private:
    int largo;
    Punto *punto;
public:
    Arreglo(const Punto arreglo_puntos[], const int tamanio);
    Arreglo(const Arreglo &Array);
};

#endif // ARREGLO_H
