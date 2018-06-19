#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Paciente.h"
#include <string>
#include<iostream>
using namespace std;
class Hospital
{
    public:
        Hospital();
        int get_tamanio();
        void cambiar(int, int ,string);
        void imprimir();
        void borrar(int);
        void vacear();
        int comodin(string,string);

        void ord_edad();
        void ord_alf(char*a[],int);
        void ord_numpac();

        bool buscar(string,string);
        void bus_rela(string);



        void agregar(string,int);
        void agregarpos(int,string, int);
        ~Hospital();
    protected:
        int lenght(string);
        int conv_char(char);
        int long contador=1800;
    private:
        Paciente *a;
        int tamanio=0;
};

#endif // HOSPITAL_H
