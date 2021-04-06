#include <iostream>
#include <string>
using namespace std;
class Pan{
    private:
    float cant_harina;
    int num_huevos;
    float leche;
    public:
    void setHarina(float aerosol){
        cant_harina=aerosol;
    }
    float getHarina(){
        return cant_harina;
    }
    void setHuevos(int huevos){
        num_huevos=huevos;
    }
    int getHuevos(){
        return num_huevos;
    }

};

int main(){
    Pan bolillo;
    int huevosdebolillo;
    bolillo.setHarina(3.5);
    bolillo.setHuevos(5);
    huevosdebolillo=bolillo.getHuevos();
    cout << huevosdebolillo;

}
