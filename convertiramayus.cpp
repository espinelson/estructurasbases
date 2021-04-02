#include <iostream>
using namespace std;
int main(){
    char palabra[50];
    cout << "Dame una cadena" << endl;
    cin.getline(palabra,50);
    cout << "Palabra antes del cambio " <<palabra << endl;
    cout << "Palabra despues del cambio " << endl;
    for (int i=0;palabra[i]!='\0';i++){
        if (palabra[i]>=97 && palabra[i]<=122){
            palabra[i]=palabra[i]-32;   
        }
        cout << palabra[i];
    }
    //cout << palabra;

}