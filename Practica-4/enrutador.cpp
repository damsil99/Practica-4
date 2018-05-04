#include "enrutador.h"


Enrutador::Enrutador(string nombre)
{
    this->nombre_nodo = nombre;
}


void Enrutador::agregar_nodo_cercano(Enrutador nodo, int costo)
{
    nodo_cercano.push_back(nodo);
    costos.push_back(costo);
}


void Enrutador::imprimir_nodos_cercanos()
{
    cout<<"Los nodos cercanos al nodo "<< this->nombre_nodo <<endl;

    for(int i=0; i<nodo_cercano.size();i++)
    {
        cout<< nodo_cercano[i].nombre_nodo << "\t" << costos[i] << endl;
    }


}

/*void Enrutador::todos_los_nodos(Enrutador nodo)
{
    todoslosnodos.push_back(nodo);

}*/

