#include <iostream>
using namespace std;

typedef struct Punto{
    float x;
    float y;
}Punto;
typedef struct Paralelogramo{
    Punto p1;
    Punto p2;
    Punto p3;
    Punto p4;
}Paralelogramo;
bool eselMismo(Punto p1, Punto p2){
    
}
double pendiente(Punto p1, Punto p2){
    return (p2.y-p1.y)/(p2.x-p1.x);
}

int main(){
    bool VARIABLE;
    VARIABLE=false;
    VARIABLE=true;
    Punto p1, p2;
    Paralelogramo pal;
    

    return 0;
}