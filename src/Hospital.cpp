#include "Hospital.h"

Hospital::Hospital()
{
    a=new Paciente[tamanio];
}

int Hospital::lenght(string a){
    int cont=0;
    for(int i=0;a[i]!='\0';i++){
        cont++;
    }
    return cont;
}

int Hospital::conv_char(char a){
    return a-'0';
}

char Hospital::p_l(string a){
    return a[0];
}




void Hospital::imprimir(){
    for(int i=0;i<tamanio;i++){
        cout<<"///////////////////////////////////"<<endl;
        cout<<"Nombre: "<<a[i].get_nombre()<<" ";
        cout<<a[i].get_apellido()<<endl;
        cout<<"EDAD: "<<a[i].get_edad()<<endl;
        cout<<"NUMERO DE PACIENTE: "<<a[i].get_numpac()<<endl;
        cout<<"///////////////////////////////////"<<endl;
    }
}
void Hospital::borrar(int posicion){
    Paciente *nuevo= new Paciente [tamanio-1];
    tamanio--;
    for(int i=0;i<posicion;i++){
        nuevo[i]=a[i];
    }
    for(int i=posicion;i<tamanio;i++)
    {
        nuevo[i]=a[i+1];
    }
    delete [] a;
    a=nuevo;
}
void Hospital::vacear(){
    delete [] a;
    tamanio=0;
}
int Hospital::get_tamanio(){
    return tamanio;
}
void Hospital::agregar(string nuevonombre,string nuevoapellido,int nuevaedad){
    Paciente *nuevo= new Paciente[tamanio+1];
    for(int i=0;i<tamanio;i++){
        nuevo[i]=a[i];
    }
    tamanio++;
    nuevo[tamanio-1].set_nombre(nuevonombre);
    nuevo[tamanio-1].set_apellido(nuevoapellido);
    nuevo[tamanio-1].set_edad(nuevaedad);
    nuevo[tamanio-1].set_numpac(++contador);
    delete [] a;
    a=nuevo;
}
void Hospital::cambiar(int pos,int ed, string nom,string apell){
    a[pos].set_edad(ed);
    a[pos].set_nombre(nom);
    a[pos].set_apellido(apell);
}
int Hospital::comodin(string a,string b){
    int conta=0;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[i]==a[0]){
            for(int j=0;j<3;j++){
                if(a[j]==b[i+j]){
                    conta++;
                }
            }
            if(conta==3){
                return 1;
            }
        }
    }
    return 0;
}


void Hospital::ord_edad(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            if(a[i] > a[i+1]){
                Paciente b(a[i]);
                a[i]=a[i+1];
                a[i+1]=b;
                cont+=1;
            }
        }
    }
}

void Hospital::ord_alf()
{
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            string uno=a[i].get_nombre();
            string dos=a[i+1].get_nombre();
            if(conv_char(p_l(uno)) > conv_char(p_l(dos))){
                cout<<p_l(uno)<<endl;
                cout<<p_l(dos)<<endl;
                Paciente temp(a[i]);
                a[i]=a[i+1];
                a[i+1]=temp;
                cont+=1;
            }
        }
    }
}

void Hospital::ord_numpac(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            if(a[i] >= a[i+1]){
                Paciente b(a[i]);
                a[i]=a[i+1];
                a[i+1]=b;
                cont+=1;
            }
        }
    }
}


bool Hospital::buscar(string a,string b){
    int conta=1;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[0]==a[0]){
            if(a[i]==b[i]){
                conta++;
            }
            if(conta==lenght(b)){
                return 1;
            }
        }
    }
    return 0;
}



void Hospital::bus_rela(string nnombre){
    for(int i=0;i<tamanio;i++){
        if(buscar(nnombre,a[i].get_apellido())){
            cout<<"Encontrado"<<endl;
            cout<<"Nombre: "<<a[i].get_nombre()<<" ";
            cout<<a[i].get_apellido()<<endl;
            cout<<"Edad: "<<a[i].get_edad()<<endl;
            cout<<"Numero de paciente: "<<a[i].get_numpac()<<endl;
            return;
        }
    }
    cout<<"Busquedas relacionadas: "<<endl;
    for(int i=0;i<tamanio;i++){
        if(comodin(nnombre,a[i].get_nombre())){
            cout<<a[i].get_nombre()<<endl;
        }
    }
}

void Hospital::bus_numpac(int num){
    int en=0;
    for(int i=0;i<tamanio;i++){
        if(a[i].get_numpac() == num){
            cout<<"Encontrado"<<endl;
            cout<<"Nombre: "<<a[i].get_nombre()<<" ";
            cout<<a[i].get_apellido()<<endl;
            cout<<"Edad: "<<a[i].get_edad()<<endl;
            cout<<"Numero de paciente: "<<a[i].get_numpac()<<endl;
            en+=1;
        }
    }
    if(en==0){
        cout<<"NO ENCONTRADO"<<endl;
    }
}



void Hospital::agregarpos(int ed,string nom,string apelli, int pos){
    Paciente *nuevo= new Paciente [tamanio+1];
    tamanio++;
    for(int i=0;i<pos;i++){
        nuevo[i]=a[i];
    }
    for(int i=pos;i<tamanio;i++){
        nuevo[i+1]=a[i];
    }
    nuevo[pos].set_edad(ed);
    nuevo[pos].set_nombre(nom);
    nuevo[pos].set_apellido(apelli);
    nuevo[pos].set_numpac(++contador);
    delete [] a;
    a=nuevo;
}
Hospital::~Hospital(){
    delete []a;
}


