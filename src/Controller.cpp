#include "Controller.h"

void Controller::opcion(int &a){
    string nombre;
    int edad;
    int pos,age;
    string name;
    if(a==1){
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
                modelo.hosp.ord_numpac();
                eleccion=0;
                break;
            case 3:
                modelo.hosp.ord_edad();
                eleccion=0;
                break;
            }
        }
    }
    else if(a==2){
        cout<<"ingresa nombre ";cin>>nombre;
        cout<<"ingresa edad ";cin>>edad;
        modelo.hosp.agregar(nombre,edad);
    }
    else if(a==3){

        cout<<"INGRESA LA POSICION: ";cin>>pos;
        if(modelo.hosp.get_tamanio()>pos && 0<pos){
            cout<<"INGRESA LA EDAD: ";cin>>age;
            cout<<"INGRESA NOMBRE: ";cin>>name;
            modelo.hosp.cambiar(pos-1,age,name);
        }
        pos=0;
        age=0;
        name=" ";
    }
    else if(a==4){
        cout<<"ingresa la posicion: ";cin>>pos;
        modelo.hosp.borrar(pos-1);
    }
    else if(a==5){
        cout<<"ingresa el nombre de la persona: ";cin>>name;
        modelo.hosp.bus_rela(name);
    }
    else if(a==6){
        modelo.hosp.imprimir();
    }
}
