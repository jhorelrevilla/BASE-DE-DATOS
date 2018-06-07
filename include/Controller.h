#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <iostream>
#include <string>
#include "Model.h"
using namespace std;

class Controller
{
    public:
        Controller();
        void eleccion(int a);
    protected:
        Model *ab;

};


#endif // CONTROLLER_H
