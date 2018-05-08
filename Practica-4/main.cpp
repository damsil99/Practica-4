#include "enrutador.h"
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    enrutador red;
    int opc=0;
    while(opc!=7){
    cout<<"\n\t    MENU\t"<<endl;
    cout<<"-[1] Para crear un nuevo enrutador"<<endl;
    //cout<<"-[2] Para remover un enrutador"<<endl;
    //cout<<"-[2] Para actualizar datos de un enrutador"<<endl;
   // cout<<"-[2] Para cargar archivo"<<endl;
    cout<<"-[2] Para saber los costos de envio"<<endl;
    cout<<"-[3] Para saber el mejor camino de envio"<<endl;
    cout<<"-[4] Para salir"<<endl;
    cout<<"Ingresar opcion :"<<endl;
    cin>>opc;
    switch (opc) {
    case 1:
        red.agregar();
        break;
    //case 2:red.eliminar();
        //break;
   // case 2:red.modificar();
     //   break;
   // case 2:
     //   red.leer();
       // break;
    case 2:red.Costos();
        red.imprimir();
        break;

    case 3:red.Costos();
        red.MRuta();
        break;

    case 4:
        break;

    default:
        cout<<"Opcion no valida "<<endl;
        break;
    }
    }

return 0;
}
