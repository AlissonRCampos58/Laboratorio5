#include <iostream>
using namespace std;

int main(){
    char figura;
    double pi;
    float r, l, b, h, a;
    pi=3.1416;

    cout<<"--------Areas de figuras geometricas--------"<<endl;
    cout<<"---Figuras---"<<endl;
    cout<<"-Circulo(c)-"<<endl;
    cout<<"-Cuadrado(C)-"<<endl;
    cout<<"-Triangulo(t)-"<<endl;

    cout<<"Ingresas figura a utilizar: "<<endl;
    cin>>figura;

     switch (figura ) {
        case 'c':
            cout<<"---Area de un circulo---"<<endl;
            cout<<"Formula: π*r*r "<<endl;
            cout<<"Ingrese el valor de r"<<endl;
            cin>>r;
            a=pi*r*r;
            cout<<"El area del circulo es igual a: "<<a<<"."<<endl;
        break;

        case 'C':
            cout<<"---Area de un Cuadrado---"<<endl;
            cout<<"Formula: l*l "<<endl;
            cout<<"Ingrese el valor de l"<<endl;
            cin>>l;
            a=l*l;
            cout<<"El area del cuadrado es igual a: "<<a<<"."<<endl;
            break;
        case 't':
            cout<<"---Area de un Triangulo---"<<endl;
            cout<<"Formula: (b*h)/2 "<<endl;
            cout<<"Ingrese el valor de b"<<endl;
            cin>>b;
            cout<<"Ingrese el valor de h"<<endl;
            cin>>h;
            a=(b*h)/2;
            cout<<"El area del triangulo es igual a: "<<a<<"."<<endl;
            break; 
    
        default:
            cout<<"Area invalida."<<endl;
    }

    return 0;
}