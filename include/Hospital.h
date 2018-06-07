#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Persona.h"
#include <string>
#include<iostream>
using namespace std;
class Hospital
{
    public:
        Hospital();
        int lenght(string);
        int conv_char(char);
        void imprimir();
        void borrar(int);
        void vacear();
        int comodin(string,string);
        void ord_alf(char*a[],int);
        void agregar(string,int);
        void agregarpos(int, int);
        virtual ~Hospital();
    protected:
        Persona *a;
        int tamanio=0;
};

#endif // HOSPITAL_H
