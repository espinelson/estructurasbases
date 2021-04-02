#include <iostream>
using namespace std;
int main(){
    char palabra[50];
    cout << "Dame una cadena" << endl;
    cin.getline(palabra,50);
    cout << "Palabra antes del cambio " <<palabra << endl;
    cout << "Palabra despues del cambio " << endl;
    for (int i=0;palabra[i]!='\0';i++){
        if (palabra[i]>=65 && palabra[i]<=90){
            palabra[i]=palabra[i]+32;   
        }
        cout << palabra[i];
    }
    /*char *palabra= new char(50);
    for (int i=0;*(palabra+i)!='\0';i++){
        if (*(palabra+i)>=65 && *(palabra+i)<=90){
            *(palabra+i)=*(palabra+i)+32;
        }
        cout <<*(palabra+i);
    }
    */

}