#include <iostream>
using namespace std;

int main(){
    char sector;
    int precio, total,ent;

    cout<<"--------Compra de tickets--------"<<endl;
    cout<<"--Precios del sector de compra--"<<endl;
    cout<<"Sol(s): 3"<<endl;
    cout<<"Sombra(S): 8"<<endl;
    cout<<"Tribuna(t): 15"<<endl;
    cout<<"Platea(p): 20"<<endl;

    cout<<"Ingrese el sector de compra: "<<endl;
    cin>>sector;

     switch (sector ) {
        case 's':
            precio=3;
            cout << "Precio: 3" << endl;
            cout<<"Cantidad de entradas: "<<endl;
            cin>>ent;
            total=precio*ent;
            cout<<"Total a pagar: "<<total<<endl;
            break;
        case 'S':
            precio=8;
            cout << "Precio: 8" << endl;
            cout<<"Cantidad de entradas: "<<endl;
            cin>>ent;
            total=precio*ent;
            cout<<"Total a pagar: "<<total<<endl;
            break;
        case 't':
            precio=15;
            cout << "Precio: 15" << endl;
            cout<<"Cantidad de entradas: "<<endl;
            cin>>ent;
            total=precio*ent;
            cout<<"Total a pagar: "<<total<<endl;
            break; 
        case 'p':
            precio=20;
            cout << "Precio: 20" << endl;
            cout<<"Cantidad de entradas: "<<endl;
            cin>>ent;
            total=precio*ent;
            cout<<"Total a pagar: "<<total<<endl;
            break;
        default:
            cout<<"Sector invalido."<<endl;
    }

    return 0;
}