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
void Hospital::imprimir(){
    for(int i=0;i<tamanio;i++){
        cout<<"///////////////////////////////////"<<endl;
        cout<<"NOMBRE: "<<a[i].get_nombre()<<endl;
        cout<<"EDAD: "<<a[i].get_edad()<<endl;
        cout<<"NUMERO DE PACIENTE: "<<a[i].Num_paciente<<endl;
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
void Hospital::agregar(string nuevonombre,int nuevaedad){
    Paciente *nuevo= new Paciente [tamanio+1];
    for(int i=0;i<tamanio;i++){
        nuevo[i]=a[i];
    }
    tamanio++;
    nuevo[tamanio-1].set_nombre(nuevonombre);
    nuevo[tamanio-1].set_edad(nuevaedad);
    nuevo[tamanio-1].Num_paciente=++contador;
    delete [] a;
    a=nuevo;
}
void Hospital::cambiar(int pos,int ed, string b){
    a[pos].set_edad(ed);
    a[pos].set_nombre(b);
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
                cout<<"a: "<<lenght(b);
                return 1;
            }
        }
    }
    return 0;
}



void Hospital::bus_rela(string nnombre){
    for(int i=0;i<tamanio;i++){
        if(buscar(nnombre,a[i].get_nombre())){
            cout<<"Encontrado"<<endl;
            cout<<"Nombre: "<<a[i].get_nombre()<<endl;
            cout<<"Edad: "<<a[i].get_edad()<<endl;
            cout<<"Numero de paciente: "<<a[i].Num_paciente<<endl;
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


void Hospital::ord_alf(char *a[],int tamanio){
    /*for(int i=0;i<tamanio-1;i++){
        if(conv_char(*(a[i])) >= conv_char(*(a[i+1]))){
            char * temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    */
}


void Hospital::agregarpos(int ed,string nom, int pos){
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
    nuevo[pos].Num_paciente=contador++;
    delete [] a;
    a=nuevo;
}
Hospital::~Hospital(){
    delete []a;
}


