#include <iostream>

using namespace std;

void maximo(int x, int y){
    if (x>y){
        cout << x;
    }else{
        cout << y;
    }
}
int suma3nums(int x, int y, int z){
    int resultado;
    resultado=x+y+z;
    return resultado;
}
int suma3(int x, int y, int z){
    return x+y+z;
}
int menu(){
    int num;
    cout << "Bienvenido al programa" << endl;
    cout << "como estas?" << endl;
    cout << "Dame un numero para hacer tu eleccion";
    cin >> num;
    return num;
}
int sumadigitos(int n){
    int resultado=0;
    for (int i=1;i<=n;i++){
        resultado=resultado+i;
    }
    return resultado;
}

int main(){
    //HACER UNA FUNCION QUE NOS HAGA LA SUMA DE LOS PRIMEROS N DIGITOS
    int a, b=10;
    a=sumadigitos(15);
    cout << a << endl;



    return 0;
}