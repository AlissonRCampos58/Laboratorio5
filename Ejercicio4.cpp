#include <iostream>
using namespace std;

int main(){
    int dinero, cuenta,in;
    char opcion;
    cout<<"-----Cajero automatico-----"<<endl;
    cout<<"Valor de prueba para la cuenta: "<<endl;
    cin>>cuenta;

    cout<<"Total en la cuenta: "<<cuenta<<endl;
    cout<<"Desea depositar(d) o retirar(r) dinero: "<<endl;
    cin>>opcion;

     switch (opcion) {
        case 'd':
            cout << "Cantidad a depositar: " << endl;
            cin>>dinero;
            in=dinero+cuenta;
            cout <<dinero<<" depositado."<<endl;
            cout<<"Total en la cuenta: "<<in<<endl;
            break;
        case 'r':
            cout << "Cantidad a retirar: "<<endl;
            cin>>dinero;
            if(cuenta > dinero){
                in=cuenta-dinero;
                cout<<dinero<<" retirado."<<endl;
                cout<<"Total en la cuenta: "<<in<<endl;
            }
            else{
                cout<<"Saldo insuficiente"<<endl;
            }
            break;
        default:
            cout<<"Opcion Invalida."<<endl;
    }

    return 0;
}