#include "Controller.h"

void Controller::opcion(int &a){
    string nombre,apellido;
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
                modelo.hosp.ord_alf();
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
    if(a==2){
        cout<<"ingresa nombre ";cin>>nombre;
        cout<<"ingresa apellido ";cin>>apellido;
        cout<<"ingresa edad ";cin>>edad;
        modelo.hosp.agregar(nombre,apellido,edad);
    }
    if(a==3){

        cout<<"INGRESA LA POSICION: ";cin>>pos;
        if(modelo.hosp.get_tamanio()>pos && 0<pos){
            cout<<"INGRESA LA EDAD: ";cin>>age;
            cout<<"INGRESA NOMBRE: ";cin>>name;
            cout<<"INGRESA NOMBRE: ";cin>>apellido;
            modelo.hosp.cambiar(pos-1,age,name,apellido);
        }
        pos=0;
        age=0;
        name=" ";
    }
    if(a==4){
        cout<<"ingresa la posicion: ";cin>>pos;
        modelo.hosp.borrar(pos-1);
    }
    if(a==5){
        int elec;
        cout<<"Como desea buscar: "<<endl;
        cout<<"     1->Apellido"<<endl;
        cout<<"     2->Numero de paciente "<<endl;cin>>elec;
        while(elec!=0){
            switch(elec){
            case 1:
                cout<<"ingresa el apellido de la persona: ";cin>>apellido;
                modelo.hosp.bus_rela(apellido);
                elec=0;
                break;
            case 2:
                cout<<"ingresa el numero de paciente: ";cin>>pos;
                modelo.hosp.bus_numpac(pos);
                elec=0;
                break;
            }
        }

    }
    if(a==6){
        modelo.hosp.imprimir();
    }
}
