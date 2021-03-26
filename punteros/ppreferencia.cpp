#include <iostream>
using namespace std;
//PASO POR REFERENCIA
//ESTA FUNCION ESTA RECIBIENDO UNA DIRECCION DE UNA VARIABLE
//ESTA FUNCION ESTA RECIBIENDO PUNTEROS, QUE SON DIRECCIONES DE MEMORIA
void sumaledos(int *num){
    *num=*num+2;
}
void cambiara14(int *n){
    *n=14;
}
//PASO POR VALOR
//ESTA FUNCION ESTA RECIBIENDO UNA COPIA DE UNA VARIABLE
void cambiara9(int num){
    num=9;
}
int sumaleuno(int num){
    num=num+1;
    return num;
}

int main(){
    int *puntero;
    int x;
    puntero=&x;
    *puntero=10;
    cout << x << endl;

    int minumero=5;
    int resultado;
    //Paso por valor
    resultado=sumaleuno(minumero);
    cout << resultado << endl;
    cout << minumero << endl;

    sumaledos(&minumero);
    cout << minumero << endl;
    cambiara14(&minumero);
    cout << minumero << endl;

    cambiara9(minumero);
    cout << minumero << endl;

    int *puntero2, otronumero=25;
    puntero2=&otronumero;
    sumaledos(puntero2); //es lo mismo a sumaledos(&otronumero);

    return 0;
}