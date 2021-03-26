#include <iostream>
using namespace std;
int main(){
    //LOS PUNTEROS SON VARIABLES QUE TIENEN COMO VALOR DIRECCIONES DE MEMORIA
    int a, b, c;
    a=1;
    b=0;
    c=1050;
    int *puntero;
    puntero=&c;
    //puntero guarda como valor la direccion de c
    cout << &c << " " <<puntero << endl;
    //puntero ya no apunta a la dir de c, ahora a la de a
    puntero=&a;
    cout << &a << " " << puntero << endl;
    //Imprimos el valor de a que es lo mismo que el contenido de puntero (*puntero)
    cout << a << " " << *puntero << endl;
    //A a le cambio el valor a -8
    a=-8;
    //Por lo tanto el contenido de puntero tambien cambio su valor
    cout << a << " " << *puntero << endl;
    //Yo puedo cambiar el valor de lo que contiene puntero tambien
    *puntero=10;
    cout << a << endl;


    char car, *ptr;
    car='-';
    //Aqui ptr no tiene valor porque no le hemos asignado una direccion de memoria
    cout << "Que me imprime aqui?" << ptr << endl;
    //Aqui ya le asignamos a ptr una direccion de memoria, la de car en especifico
    ptr=&car;
    cout << "Mi puntero a caracter tiene como valor " << *ptr << " " << car << endl;



    //LOS PUNTEROS COMO SON VARIABLES , TAMBIEN TIENEN DIRECCIONES DE MEMORIA
    cout << "La direccion de memoria de mi puntero es "<< &puntero << endl;
    int **p2;
    //mi variable p2 guarda como direcciones de memoria DIRECCIONES de punteros
    p2=&puntero;
    //cuando yo imprimo el contenido de p2, me esta imprimiendo el contenido de lo que apunta p2
    //y p2 apunta a puntero, y puntero tiene como valor la direccion de memoria de a
    cout << *p2 << endl;
    //aqui imprimo el contenido del contenido de lo que apunta p2
    cout << **p2 << endl;


}