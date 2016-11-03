#ifndef ARREGLO_VECTOR_H
#define ARREGLO_VECTOR_H
#include "Vector.h"


class Arreglo_vector
{
private:
    int largo;
    Vector *array_vector;
    void cambiar_largo(const int x);
public:
    Arreglo_vector();
    Arreglo_vector(const Vector arreglo_vector[], const int tamanio);
    Arreglo_vector(Arreglo_vector &arregloV);
    void imprimir_arreglo();
    void insertar_fin();
    void insertar_posicion();
    const int obtener_tamanio();
    void remover();
    void limpiar();
};

#endif // ARREGLO_VECTOR_H
