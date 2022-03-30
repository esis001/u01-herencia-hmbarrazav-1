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

class Docente : public Persona{
    private:
        int sueldo;
        string especialidad;
    public:
        Docente(string, string, int, int, string);
        void mostrarDocente();
        //void ingresarNotas();
        //void visualizarRegistro();
};

Docente :: Docente(string n, string d, int e, int s, string es) : Persona(n,d,e){
    sueldo = s;
    especialidad = es;       
}

void Docente :: mostrarDocente(){
    mostrarDatos();
    cout<<"\t tiene un sueldo de S/"<<sueldo<<" y tiene la especialidad: ";
    cout<<especialidad;
}

void Persona :: mostrarDatos(){
    cout<<nombres<<" tiene el DNI# "<<DNI<<" y tiene "<<edad;
    cout<<" anios de edad."<<endl;
}

int main(){
    Persona p("Juan Perez", "40302010",25);
    p.mostrarDatos();
    Docente d("Pablo Iglesias", "10203040", 54, 3000, "Auditoria informatica");
    d.mostrarDocente();
    return 0;
}