#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <iostream>
#include <vector>

using namespace std;


class Enrutador
{
public:
    Enrutador(string nombre);
    string nombre_nodo;
    vector <Enrutador> nodo_cercano;
    //vector <Enrutador> todoslosnodos;
    vector <int> costos;

    void agregar_nodo_cercano(Enrutador nodo, int costo);
    void imprimir_nodos_cercanos();
    //void todos_los_nodos(Enrutador nodo);


};

#endif // ENRUTADOR_H
