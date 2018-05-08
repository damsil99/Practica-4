#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include<iostream>
#include<map>
#include<vector>
#include<fstream>
using namespace std;
class enrutador
{
public:

    int c=0;
    vector<int> mod;
    vector<int> costos;
    vector<bool>conexion;
    vector<vector<int>> Enlases;
    void imprimir(char);
    void modificar(void);
    void leer(void);
    void agregar(void);
    void eliminar(void);
    void Costos(void);
    void MRuta(void);
    void imprimir(void);
};

#endif // ENRUTADOR_H
