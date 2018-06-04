#include "Controller.h"

Controller::Controller(int &a)
{

    switch(a){
    case 0:
        a=0;
        break;
    case 1:
        int eleccion;
        cout<<"Como desea ordenar: "<<endl;
        cout<<"     1->Alfabetico"<<endl;
        cout<<"     2->NUMERO DE PACIENTE"<<endl;
        cout<<"     3->EDAD"<<endl;cin>>eleccion;
        while(eleccion!=0){
            switch(eleccion){
            case 1:
                eleccion=0;
                break;
            case 2:
                eleccion=0;
                break;
            case 3:
                eleccion=0;
                break;
            }
        }
        break;
    case 2:
        cout<<"2"<<endl;
        break;
    case 3:
        cout<<"3"<<endl;
        break;
    case 4:
        cout<<"4"<<endl;
        break;
    case 5:
        cout<<"5"<<endl;
        break;

    }
}
