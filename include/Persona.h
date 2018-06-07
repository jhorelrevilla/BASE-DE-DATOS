#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include <string>
using namespace std;

class Persona
{
    public:
        Persona();
        Persona(string,int);
        Persona(const Persona &p);
        void set_nombre(string a);
        void set_edad(int);
        string get_nombre();
        int get_edad();
    private:
        string nombre;
        int edad;
};

#endif // PERSONA_H
