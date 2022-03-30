#include<iostream>
using namespace std;

class Persona{
    protected:
        string nombres;
        string DNI;
        int edad;
    public:
        Persona(string, string, int);
        void mostrarDatos();
};

Persona :: Persona(string n, string d, int e){
    nombres = n;
    DNI = d;
    edad = e;
}

void Persona :: mostrarDatos(){
    cout<<nombres<<" tiene el DNI# "<<DNI<<" y tiene "<<edad;
    cout<<" anios de edad."<<endl;
}

int main(){
    Persona p("Juan Perez", "40302010",25);
    p.mostrarDatos();
    return 0;
}