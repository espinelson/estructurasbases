#include <iostream>
using namespace std;
//
void multiplicarpordos(int arreglo[], int tamano){
    for (int i=0;i<tamano;i++){
        arreglo[i]=arreglo[i]*2;
    }
}
int main(){
    int numeros[10];
    //Llenando el arreglo
    cout << "Dame 10 numeros" << endl;
    for (int i=0;i<10;i++){
        cout << "Dame el numero "<< i << " ";
        cin >> numeros[i];
    }
    //numeros es exactamente igual a &numeros[0]
    //multiplicarpordos(&numeros[0],10)
    multiplicarpordos(numeros,10);
    for (int i=0;i<10;i++){
        cout << numeros[i] << endl;
    }







}