#include "Poligono.h"

Poligono :: Poligono(const Punto arreglo_puntos[], const int tamanio)
{
    Arreglo a(arreglo_puntos, tamanio);
    puntos = a;
}

Poligono :: Poligono(Arreglo &arreglo_puntos)
{
    puntos = arreglo_puntos;
}

double Poligono :: area(){}

/*int Poligono :: getNumPoligonos()
{
    return instancias;
}*/

int Poligono :: getNumLados(){}

/*const Arreglo Poligono :: *getPuntos()
{
    Arreglo *ptr;
    ptr = puntos;
}*/

