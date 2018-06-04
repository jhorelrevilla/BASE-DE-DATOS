#include "Persona.h"

Persona::Persona(){
    nombre="NULL";
    edad=0;
}
Persona::Persona(char* i,int j)
{
    nombre=i;
    edad=j;
}
char* Persona::get_nombre(){
    return nombre;
}
void Persona::set_nombre(char* a){
    nombre=a;
}
int Persona::get_edad(){
    return edad;
}
void Persona::set_edad(int a){
    edad=a;
}
