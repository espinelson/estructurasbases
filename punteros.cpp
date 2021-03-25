#include <iostream>

using namespace std;

int main(){
    int a;
    char caracter='a';
    float num;

    a=50;
    //p nomas puede guardar direcciones de memoria de ENTEROS (int)
    int *p;
    //pachar es un puntero que nomas puede guardar direcciones de memoria de caracteres (CHAR) 
    char *pachar;
    pachar=&caracter;
    p=&a;
    cout << a << endl;
    cout << &a << endl;

    cout << p << endl;
    //El operador * me imprime el CONTENIDO de lo que esta apuntado mi puntero
    cout << *p << endl;
    *p=30; //a=30
    cout << a << endl;

    cout << "mi caracter es " << caracter << endl;
    cout << "mi caracter es " << *pachar << endl;


    cout << &p << endl;
    

}