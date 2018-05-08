#include "enrutador.h"
using namespace std;

void enrutador::imprimir(char a){
    costos=Enlases[a-65];
    int i=0;
    cout<<"los costos de el enrutador entre "<<a<<" con:"<<endl;
    cout<<costos[5];
    if(conexion[a-65]==1){
    for(i=0;costos[i]!='\0';i++){
        if(costos[i]<10 && costos[i]>=0){
            cout<<a<<" es "<<costos[i]<<endl;
        }
        else{
            cout<<a<<" no hay conexion directa"<<endl;
        }
        a++;
    }
    cout<<endl;}
    else{
        cout<<"el enrutador no existe"<<endl;
    }
}
void enrutador::modificar(void){
    int a,b,c;
    cout<<"ingrese el enrutador a modificar"<<endl;
    cin>>a;
    cout<<"ingrese con quiese con quien se modificara"<<endl;
    cin>>b;
    if(Enlases[a-65][b-65]<10 && Enlases[a-65][b-65]>0){
        cout<<"Ingrese dato de modificacion "<<endl;
        cin>>c;
        Enlases[a-65][b-65]=c;
    }
    else{
        cout<<"conexion invalida "<<endl;
    }
}

void enrutador::leer(void){
    costos.clear();
    ifstream txt;
    char c;
    int idc;
    txt.open("conexiones.txt",ios::in);
    while(txt.get(c)){
        //if(c==' ');
        idc=c-48;
        if(c!=' '&& c!='\n'&& idc<10){
            costos.push_back(idc);
        }
        //if(c>63);
        if(c=='\n'){
        Enlases.push_back(costos);
        conexion.push_back(1);
        costos.clear();
        }}
        }

void enrutador::agregar(void){
    char x,l;
    int aux;
    costos.clear();
    x=(Enlases.size()+65);
    cout<<"El enrutador que se agregara sera "<<x<<endl;

    for(unsigned int i=0;i<=Enlases.size();++i){
        l=i+65;
        cout<<"ingrese valor entre A y "<<l<<endl;
        cin>>aux;
        costos.push_back(aux);
    }
    Enlases.push_back(costos);
    conexion.push_back(1);
    }
void enrutador::eliminar(void){
    int x;

    cout<<"Ingrese caracter de el enrutador :"<<endl;
    cin>>x;
    if(conexion[x-65]!='\0' && conexion[x-65]!=0){
        for(unsigned int i=0;i<Enlases.size();++i){
            Enlases[i][x-65]='*';
        }
        conexion[x-65]=0;
    }
    cout<<"Enrutador y conexiones removidas."<<endl;
}
void enrutador::imprimir(void){
   cout<<"costo 1 : "<<mod[0]<<"\n Costo 2: "<<mod[1]<<endl;
}
void enrutador::Costos(void){
    int x,y,z,aux=0,cost=0;
    char _x,_y;
    cout<<"ingrese de donde quiere eviar el paquete :"<<endl;
    cin>>_x;
    cout<<"ingrese el destino :"<<endl;
    cin>>_y;
    x=_x-65;
    y=_y-65;
    z=x;
    if(x==y){
        cout<<"El costo es = 0"<<endl;
        mod={-1,-1};
    }
    else{
    for(unsigned int i=0;i<Enlases.size();++i){
        costos.clear();
        costos=Enlases[i];
        if(costos[y]>=0){
            cost+=costos[y];
        break;}
        else{
            x++;
            if(x==Enlases.size())x=0;
            //
            if(costos[x]>=0){
            cost+=costos[x];}
            else{
                cost=0;
                break;
            }
        }
    }
    for(unsigned int j=0;j<Enlases.size();++j){
         costos=Enlases[j];

         if(costos[y]>=0){
             aux+=costos[y];
             break;}
         else{
             z--;
             if(z==(-1))z=(Enlases.size())-1;
             if(costos[z]>=0){
             aux+=costos[z];}
             else{
                 aux=0;
                 break;
             }
         }
        }
    if(aux==0 &&cost==0) mod={-2,-2};
    else{

        mod.clear();
        mod.push_back(aux);
        mod.push_back(cost);

    }
    }
}
void enrutador::MRuta(void){
    vector<int>x;
    x=mod;
    if(x[0]==-2)cout<<"No hay conexion disponible...."<<endl;
    if(x[0]==-1)cout<<"El costo de la conexion es cero"<<endl;
    if(x[0]>=0){
        if(x[0]>=x[1])cout<<"El menor costo posible es: "<<x[1]<<endl;
        else{
            cout<<"El menor costo posible es: "<<x[0]<<endl;
        }
    }
}
