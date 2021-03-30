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
    Pajaro cuervo;
    cuervo.raza="Cuervus Negrus";
    //cuervo.edad es una variable de tipo puntero a entero
    *(cuervo.edad)=1;
    cout << cuervo.edad << endl;
    cout << *cuervo.edad << endl;

    //Esto si me imprime Cuervus Negrus porque cuervo.raza NO es un puntero a string
    //es un string normalito
    cout << cuervo.raza << endl;
}