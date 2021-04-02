#include <iostream>
#include <string>
using namespace std;
class Palabra{
    private:
    char *A;
    int nC;
    public:
    void Leer();
    void LeeLinea();
    void Imprimir();
    void mM();
    void Mm();
    Palabra operator +(Palabra);
    void ContarVocales();
    void ContarConsonantes();
    void BuscarPalabra(char *);
    void ContarPalabras();
};



int main(int argc, const char * argv[]) {

    Palabra A, B;
    char b[50];
    int opc;
    do
    {
    cout<<"1.-Leer una palabra"<<endl;
    cout<<"2.-Concatenar Palabra "<<endl;
    cout<<"3.-Leer Linea "<<endl;
    cout<<"4.-Imprimir "<<endl;
    cout<<"5.-Convertir mayusculas a minusculas "<<endl;
    cout<<"6.-Convertir minusculas a mayusculas "<<endl;
    cout<<"7.-Contar Vocales "<<endl;
    cout<<"8.-Contar Consonantes "<<endl;
    cout<<"9.-Contar Palabras "<<endl;
    cout<<"10.-Buscar Palabra "<<endl;
    cout<<"Teclee la opción...";
    cin>>opc;

    switch(opc)
    {
    case 1:
    A.Leer();
    break;
    case 2:
    cout<<"Teclee la palabra a concatenar";
    B.Leer();
    A=A+B;
    break;
    case 3:
    A.LeeLinea();
    break;
    case 4:
    A.Imprimir();
    break;
    case 5:
    A.Mm();
    break;
    case 6:
    A.mM();
    break;
    case 7:
    A.ContarVocales();
    break;
    case 8:
    A.ContarConsonantes();
    break;
    case 9:
    A.ContarPalabras();
    break;
    case 10:
    cout<<"Teclee la palabra a buscar"<<endl;
    cin>>b;
    A.BuscarPalabra(b);
    default:
    cout<<"opción no válida"<<endl;
    break;

    }


    }while(opc<11);



    return 0;
}