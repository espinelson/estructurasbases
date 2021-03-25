/*práctica 5*/
#include <string.h>
#include <iostream>

using namespace std;

class Alumno {
    private:
        char *Boleta, *Escuela, *Carrera, *Nombre, *AM, *AP;
        float Promedio;
        int Edad;
    public:
        Alumno();
        void Leer ();
        void Imprimir ();
};

class Grupo {
    private:
        int nA;
        Alumno *A;
    public:
        void Inicializar ();
        void Leer ();
        void Imprimir ();
        void agregar(Alumno al);
        //crear funcion sobrecupo
        //agrega alumnos al grupo que se indique
        //debe imprimir igual, usando la misma función imprimir
};

int main (){
    Grupo *A;
    int nG, i;
    cout<<"Teclee el numero de grupos = "; cin>>nG;
    A = new Grupo [nG];
    if(A==NULL){
        cout<<"No hay memoria para grupos"<<endl;
        system("pause");
        exit(0);
    }
    for(i=0; i<nG; i++)
        (A+i)->Inicializar();
    //for(i=0; i<nG; i++)
    //    (A+i)->Leer();
    for(i=0; i<nG; i++){
        cout<<"Grupo: "<<i+1<<endl;
        (A+i)->Imprimir();
    }
    return 0;
}

Alumno::Alumno(){
    Nombre = new char [8];
    memset(Nombre,'-',8); 
    Nombre[7] = NULL;
    
    AM = new char [8];
    memset(AM,'-',8); 
    AM[7] = NULL;
    
    AP = new char [8];
    memset(AP,'-',8); 
    AP[7] = NULL;
    
    Boleta = new char [8];
    memset(Boleta,'-',8); 
    Boleta[7] = NULL;
    
    Escuela = new char [8];
    memset(Escuela,'-',8); 
    Escuela[7] = NULL; 

    Carrera = new char [8];
    memset(Carrera,'-',8); 
    Carrera[7] = NULL;

    Promedio = 0.0;

    Edad = 0;
}

void Alumno::Leer (){
    char M[50];
    
    cout<<"Ingresa el nombre = "; cin>>M;
    Nombre = new char [strlen(M)+1];
    strcpy(Nombre,M);
    
    cout<<"Ingresa tu apellido paterno = "; cin>>M;
    AP = new char [strlen(M)+1];
    strcpy(AP,M);
    
    cout<<"Ingresa tu apellido materno = "; cin>>M;
    AM = new char [strlen(M)+1];
    strcpy(AM,M);

    cout<<"Ingresa tu edad = "; cin>>Edad;
    
    cout<<"Ingresa tu boleta = "; cin>>M;
    Boleta = new char [strlen(M)+1];
    strcpy(Boleta,M);

    cout<<"Ingresa tu escuela = "; cin>>M;
    Escuela = new char [strlen(M)+1];
    strcpy(Escuela,M);

    cout<<"Ingresa tu carrera = "; cin>>M;
    Carrera = new char [strlen(M)+1];
    strcpy(Carrera,M);

    cout<<"Ingresa tu promedio = "; cin>>Promedio;
}

void Alumno::Imprimir (){
    cout<<"Nombre: "<<Nombre<<"  "<<AP<<"  "<<AM<<"\t Edad:"<<Edad<<endl;
    cout<<"Boleta: "<<Boleta<<"\t"<<"Escuela: "<<Escuela<<endl;
    cout<<"Carrera: "<<Carrera<<"\t"<<"Promedio: "<<Promedio<<endl;
}

void Grupo::Inicializar (){
    cout<<"Teclee el numero de alumnos = ";
    cin>>nA;
    A = new Alumno [nA];
    if(A==NULL){
        cout<<"No hay memoria disponible para alumnos"<<endl;
        system("pause");
        exit(0);
    }
}

void Grupo::Leer() {
    int i;
    for(i=0; i<nA; i++)
        (A+i)->Leer();
}

void Grupo::Imprimir(){
    int i;
    for(i=0; i<nA; i++)
        (A+i)->Imprimir();
}
void Grupo::agregar(Alumno al){
    

}