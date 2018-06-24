#include "Paciente.h"

Paciente::Paciente(){
    nombre="NULL";
    edad=0;
    Num_paciente=00000;
}
Paciente::Paciente(string i,int j)
{
    nombre=i;
    edad=j;
}
Paciente::Paciente(const Paciente &p){

    this->nombre=p.nombre;
    this->apellido=p.apellido;
    this->edad=p.edad;
    this->Num_paciente=p.Num_paciente;
}
bool Paciente::operator >(const Paciente& a){
    if(this->edad >= a.edad){
        return true;
    }
    return false;
}
bool Paciente::operator >=(const Paciente& a){
    if(this->Num_paciente >= a.Num_paciente){
        return true;
    }
    return false;
}
int Paciente::get_numpac(){
    return Num_paciente;
}
void Paciente::set_numpac(int a){
    Num_paciente=a;
}
