#ifndef ARREGLO_H
#define ARREGLO_H
#include "Point.h"

class Arreglo{
private:
    int largo;
    Punto *array_punto;
    void cambiar_largo(const int x);
public:
    Arreglo();
    Arreglo(const Punto arreglo_puntos[], const int tamanio);
    Arreglo(Arreglo &arrayX);
    void imprimir_arreglo();
    void insertar_fin();
    void insertar_posicion();
    const int obtener_tamanio();
    void remover();
    void limpiar();
};

#endif // ARREGLO_H
