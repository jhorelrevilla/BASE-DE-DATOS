#include "Persona.h"

Persona::Persona(){
    nombre="NULL";
    edad=0;
}
Persona::Persona(string i,int j)
{
    nombre=i;
    edad=j;
}
Persona::Persona(const Persona &p){
    this->nombre=nombre;
    this->edad=edad;

}
string Persona::get_nombre(){
    return nombre;
}
void Persona::set_nombre(string a){
    nombre=a;
}
int Persona::get_edad(){
    return edad;
}
void Persona::set_edad(int a){
    edad=a;
}
