#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <iostream>
#include <string>
#include "Model.h"
using namespace std;

class Controller
{
    public:
        void opcion(int &a);
    private:
        Model modelo;
};


#endif // CONTROLLER_H
