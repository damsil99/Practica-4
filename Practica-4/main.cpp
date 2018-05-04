#include <iostream>
#include "enrutador.h"
#include <vector>

using namespace std;

class todo
{
        public:
        todo(string nombre);
        string nombre;
        vector <todo> todos_los_nodos;
        vector<todo> all;
        void todoslosnodos(todo nodo);
        void imprimir();
        bool comparar(string nom);

};

todo::todo(string _nombre)
{
    nombre = _nombre;
}

void todo::todoslosnodos(todo nodo)
{
    todos_los_nodos.push_back(nodo);

}

void todo::imprimir()
{

    cout<<"MOSTRANDO ENRUTADORES "<< this->nombre <<endl;

    for(int i=0; i<todos_los_nodos.size();i++)
    {
        cout<< todos_los_nodos[i].nombre << " " << this->nombre << endl;
    }
}

bool todo::comparar(string nom)
{
    for(int i=0; i<todos_los_nodos.size();i++)
    {
        if( todos_los_nodos[i].nombre==nom)
        {
            return true;
        }

    }

}


int main()
{

    string name,reference;
    todo cosas(" ");
    int aux=0;

    while (aux==0)

    {
    cout<<"Ingrese el nombre del enrutador: "<<endl;
    cin>>name;
    cout<<"Ingrese referencia: "<<endl;
    cin>>reference;
    aux++;
        if(aux==1)
        {
            Enrutador name(reference);
        }
    cosas.todoslosnodos(reference);
    cout<<"\nDesea crear mas enrutadores:\npressure [0]\n\nDesea conectar nodos?\npressure [1]\n\nDesea salir?\npressure [2]"<<endl;
    cin>>aux;

        if(aux==1)
        {
            bool val=false;
            string auxc;
            cout<<"Ingrese nombre del nodo a enlazar"<<endl;
            cin>>name;
            auxc=name;
            cout<<"Ingrese la referencia"<<endl;
            cin>>reference;
            Enrutador name(reference);
            val=cosas.comparar(auxc);
            if(val==true)
            {


            }




        }

    }

    cosas.imprimir();




    return 0;
}
