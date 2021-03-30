#include <iostream>
#include <string>
using namespace std;

typedef struct Color{
    string primario;
    string secundario;
    string terciario;
}Color;
typedef struct Pajaro{
    int edad;
    struct Color color;
    string raza;
    float peso;
}Pajaro;
int main(){
    //Colibri es una variable de tipo Struct Pajaro
    Pajaro colibri;
    //Colibri.edad es una variable de tipo int
    colibri.edad=15;
    colibri.color.primario="Verde";
    cout << colibri.edad << colibri.color.primario << endl;

    //Crear un puntero a Pajaro
    Pajaro *p;
    //Le guardamos la direccion de colibri
    p=&colibri;

    (*p).edad=10;
    cout << "La edad del colibri es " << colibri.edad << endl;
    (*p).raza="AveChiquita";
    cout << "Su raza es " << colibri.raza << endl;

    /*OJOO
    SE VE FEO NO?
    HAY UNA FORMA DIFERENTE DE PONERLO
    USANDO EL OPERADOR ->
    */
   //AL CONTENIDO DEL PUNTERO EN LA PARTE DE EDAD, ASIGNALE 18
   p->edad=18; //ES EXACTAMENTE IGUAL A (*p).edad=18
   colibri.edad=18;

   //SI LE QUEREMOS ASIGNAR VALORES A UN STRUCT NORMAL
   //SIMPLEMENTE PONEMOS colibri.edad=18

   //SI LE QUEREMOS ASIGNAR VALORES A UN PUNTERO A STRUCT
   //LE PONEMOS p->edad=18
   p->color.primario="Verde"; //colibri.color.primario="Verde"
   p->peso=8.5; //colibri.peso=8.5




}