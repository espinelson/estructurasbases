#include <iostream>
#include <string>
using namespace std;

class Carro{
    public:
    string modelo;
    string marca;
    int anio;
    Carro(string x,string y, int z){
        modelo=x;
        marca=y;
        anio=z;
    }
};
int main(){
    Carro micarro("AMG GT","MERCEDES",2020);
    cout << micarro.anio;
}