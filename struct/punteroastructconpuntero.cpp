#include <iostream>
#include <string>
using namespace std;

typedef struct Color{
    string primario;
    string secundario;
    string terciario;
}Color;
//LOS STRUCT TAMBIEN PUEDEN TENER PUNTEROS COMO TIPOS DE DATO
typedef struct Pajaro{
    int *edad;
    struct Color *color;
    string raza;
    float peso;
}Pajaro;

int main(){
    Pajaro quetzal, *p;
    p=&quetzal;
    p->peso=3.5; // es igual == (*p).peso=3.5

    *p->edad=2;

}