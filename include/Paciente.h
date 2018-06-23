#ifndef PACIENTE_H
#define PACIENTE_H
#include "Persona.h"

class Paciente:public Persona
{
        int  Num_paciente=0;
    public:
        Paciente();
        Paciente(string,int);
        Paciente(const Paciente &p);
        bool operator > (const Paciente& a);
        bool operator >= (const Paciente& a);
        int get_numpac();
        void set_numpac(int);
};

#endif // PACIENTE_H
