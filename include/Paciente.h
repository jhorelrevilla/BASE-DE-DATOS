#ifndef PACIENTE_H
#define PACIENTE_H
#include "Persona.h"

class Paciente:public Persona
{
    public:
        Paciente();
        Paciente(string,int);
        Paciente(const Paciente &p);
        bool operator > (const Paciente& a);
        bool operator >= (const Paciente& a);
        int long Num_paciente=0;
};

#endif // PACIENTE_H
