#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        Persona();
        Persona(char*,int);
        void set_nombre(char*);
        void set_edad(int);
        char* get_nombre();

        int get_edad();
    private:
        char* nombre;
        int edad;
//        char sexo();
        //int numHistorial();
};

#endif // PERSONA_H
