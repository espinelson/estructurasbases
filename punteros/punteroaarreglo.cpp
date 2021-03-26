#include <iostream>
using namespace std;
int main(){
    int listanums[5],*p;
    listanums[0]=3;
    p=&listanums[0];
    cout << *p << endl;
    //YO PUEDO RECORRER UN ARREGLO USANDO PUNTEROS
    cout << "Las direcciones de memoria de la posicion 0 y 1 de mi arreglo son " << endl;
    cout << &listanums[0] << endl;
    cout << &listanums[1] << endl;

    cout << "Las direcciones de memoria de la posicion 0 y 1 de mi puntero son" << endl;
    cout << p << endl;
    cout << p+1 << endl;
    listanums[0]=3;
    listanums[1]=10;
    cout << *p+1 << endl; //IMPRIME EL CONTENIDO DE P y luego sumale 1
    cout << *(p+1) << endl; //IMPRIME EL CONTENIDO EN LA POSICION P+1

    /*
    for (int i=0;i<5;i++){
        cout << "Dame el numero " << i << endl;
        cin >> *(p+i);
    }
    cout << "Los numeros son" << endl;
    for (int i=0;i<5;i++){
        cout << *(p+i) << " ";
    }*/
   




}