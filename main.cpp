#include <iostream>
using namespace std;
#include "Controller.h"
#include <windows.h>
#include <cstdlib>
#include <fstream>
#include <string>






int main(){
    Controller c;
    while (true){
        int elec=0;
        cout<<"1) ORDENAR PACIENTES "<<endl;
        cout<<"2) INGRESAR NUEVO PACIENTE "<<endl;
        cout<<"3) MODIFICAR PACIENTE"<<endl;
        cout<<"4) ELIMINAR PACIENTE "<<endl;
        cout<<"5) BUSCAR PACIENTE"<<endl;
        cout<<"6) IMPRIMIR REGISTRO"<<endl;cin>>elec;
        c.opcion(elec);
        system("pause");
        system("CLS");

    }

    return 0;
}

