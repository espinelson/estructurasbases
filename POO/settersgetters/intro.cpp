#include <iostream>
#include <string>
using namespace std;
class Persona{
    private:

    int cant_dinero;
    int id;
    string nombre;
    string apellido;
    int num_cuenta;
   
    public:
    
    void setNombre(string ingreso){
        nombre=ingreso;
    }
    string getNombre(){
        return nombre;
    }
    void setDinero(int pesitos){
        cant_dinero=pesitos;
    }
    int getDinero(){
        return cant_dinero;
    }
   
    void disponer(int dinero){
        cant_dinero=cant_dinero+dinero;
    }
};



int main(){
    Persona pedrito,juanito;

    string nombre_actual;
    int dinerodepedrito;

    pedrito.setNombre("Pedro");
    juanito.setNombre("Juan");

    pedrito.setDinero(100);
    dinerodepedrito=pedrito.getDinero();

    nombre_actual=pedrito.getNombre();


    cout << nombre_actual;
}