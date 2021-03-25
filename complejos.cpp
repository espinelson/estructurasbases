#include <iostream>
using namespace std;

typedef struct Complejo{
    int real;
    int imaginario;
}Complejo;

/*typedef struct NUMS5{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
}NUMS5;*/
/*NUMS5 funcionprueba(NUMS5 ejemplo){
    NUMS5 resultado;
    resultado.num1=ejemplo.num1+1;
    resultado.num2=ejemplo.num2+1;
    resultado.num3=ejemplo.num3+1;
    resultado.num4=ejemplo.num4+1;
    resultado.num5=ejemplo.num5+1;
    return resultado;
}*/

Complejo suma(Complejo num1, Complejo num2){
    Complejo NUMERO;
    NUMERO.real=num1.real+num2.real;
    NUMERO.imaginario=num1.imaginario+num2.imaginario;
    return NUMERO;
}
int Re(Complejo c1){
    return c1.real;
}
int Im(Complejo c){
    return c.imaginario;
}

Complejo crearComplejo(int re, int im){
    Complejo c;
    c.real=re;
    c.imaginario=im;
    return c;
}
Complejo multiplicacion(Complejo a, Complejo b){
    Complejo res;
    //res.real=
    //res.imaginario=
    return res;
}

Complejo resta(Complejo a, Complejo b){
    Complejo resultado;
    resultado.real=a.real-b.real;
    resultado.imaginario=a.imaginario-b.imaginario;
    return resultado;
}
int maximo(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    Complejo numero1, numero2, res;
    cout << "Dame el numero 1"<< endl;
    cin >> numero1.real >> numero1.imaginario;
    cout << "Dame el numero 2" << endl;
    cin >> numero2.real >> numero2.imaginario;
    res=suma(numero1,numero2);
    cout << "La suma es" << res.real<< "+" << res.imaginario << "j"<< endl;
    Complejo complejo3;
    complejo3 = resta(numero1,numero2);
    return 0;
}