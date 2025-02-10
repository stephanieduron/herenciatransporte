#include <iostream>
using namespace std;

class Vehiculo{
    protected:
    string matricula;
    string modelo;
    int potenciaCV;

    public:
    Vehiculo(string matricula, string modelo, int potenciaCV)
    : matricula(matricula), modelo (modelo), potenciaCV(potenciaCV){}

    string getMatricula(){
        return matricula;
    }
    string getModelo(){
        return modelo;
    }
    int getPotenciaCV(){
        return potenciaCV;
    }
};

class Taxi:public Vehiculo{
    private:
    int numeroLicencia;

    public:
    Taxi(string matricula, string modelo, int potenciaCV, int numeroLicencia)
    : Vehiculo(matricula, modelo,potenciaCV), numeroLicencia(numeroLicencia){}

    void setNumeroLicencia(int xnumeroLicencia){
        numeroLicencia=xnumeroLicencia;
    }
    int getNumeroLicencia(){
        return numeroLicencia;
    }


};

class Autobus: public Vehiculo{
    private: 
    int numeroPlazas;

    public:
    Autobus(string matricula, string modelo, int potenciaCV, int numeroPlazas)
    : Vehiculo(matricula, modelo, potenciaCV), numeroPlazas(numeroPlazas){}

    void setNumeroPlazas(int xnumeroPlazas){
        numeroPlazas=xnumeroPlazas;
    }
    int getNumeroPlazas(){
        return numeroPlazas;
    }
};

int main (){

    Vehiculo vehiculo("1234XYZ", "Toyota Corolla",132);
    cout <<"Vehiculo: "<<vehiculo.getMatricula()<<","<<vehiculo.getModelo()<<","<<vehiculo.getPotenciaCV()<<"CV"<<endl;

    Taxi taxi("9102DEF","Hyundai",147,4567);
    cout<<"Taxi "<<taxi.getMatricula()<<","<<taxi.getModelo()<<" Licencia: "<<taxi.getNumeroLicencia()<<endl;

    Autobus autobus("522EFG","Mercedes",200,30);
    cout <<"Autobus: "<<autobus.getMatricula()<<","<<autobus.getModelo()<<" Plazas:"<<autobus.getNumeroPlazas()<<endl;
    return 0;
}