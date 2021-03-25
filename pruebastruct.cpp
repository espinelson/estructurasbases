#include <iostream>
#include <string>
using namespace std;
struct Persona{
    string nombre;
    string appat;
    string apmat;
    int edad;
};


int main(){
    struct Persona ejemplo;
    cout << "Dame un nombre" << endl;
    cin >> ejemplo.nombre;
    cout << "Dame un apellido paterno y un materno" << endl;
    cin >> ejemplo.appat >> ejemplo.apmat;



    return 0;
}