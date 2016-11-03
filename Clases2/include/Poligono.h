#ifndef POLIGONO_H
#define POLIGONO_H
#include "Arreglo.h"

class Poligono
{
protected:
    Arreglo puntos;
    static int instancias;
public:
    Poligono(const Arreglo arreglo_puntos,const int largo);
    Poligono(Arreglo &arreglos);
};

#endif // POLIGONO_H
