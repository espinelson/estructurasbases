#include <iostream>
#include <string>
using namespace std;

typedef struct Alumno{
    string nombre;
    string apellidop;
    string appellidom;
    int numboleta;
    int edad;
    string sexo;
    float promedio;
}Alumno;
Alumno crearAlumno(string nom, string appat, string apmat, int numbol, int edad, string sexo, float prom){
    Alumno alumno1;
    alumno1.nombre=nom;
    alumno1.apellidop=appat;
    alumno1.appellidom=apmat;
    alumno1.numboleta=numbol;
    alumno1.edad=edad;
    alumno1.sexo=sexo;
    alumno1.promedio=prom;
    return alumno1;
}

int main(){
    Alumno juanito;
    juanito.sexo="Masculino";
    juanito=crearAlumno("juan","perez","martinez",203984394,35,"Masculino",9.45);


    return 0;
}