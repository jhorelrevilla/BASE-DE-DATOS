#include "Hospital.h"

Hospital::Hospital()
{
    a=new Persona[tamanio];
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
        cout<<a[i].get_nombre()<<endl;
        cout<<a[i].get_edad()<<endl;
        cout<<"///////////////////////////////////"<<endl;
    }
}
void Hospital::borrar(int posicion){
    Persona *nuevo= new Persona [tamanio-1];
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
void Hospital::agregar(string nuevonombre,int nuevaedad){
    Persona *nuevo= new Persona [tamanio+1];
    for(int i=0;i<tamanio;i++){

        nuevo[i]=a[i];
        cout<<"a"<<endl;
    }
    tamanio++;
    nuevo[tamanio-1].set_nombre(nuevonombre);
    nuevo[tamanio-1].set_edad(nuevaedad);
    delete [] a;
    a=nuevo;
}
int Hospital::comodin(string a,string b){
    int conta=0;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[i]==a[0]){
            for(int j=0;j<lenght(a);j++){
                if(a[j]==b[i+j]){
                    conta++;
                }
            }
            if(conta==lenght(a)){
                return 1;
            }
        }
    }
    return 0;
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


void Hospital::agregarpos(int elem, int pos){
    Persona *nuevo= new Persona [tamanio+1];
    tamanio++;
    for(int i=0;i<pos;i++){
        nuevo[i]=a[i];
    }
    for(int i=pos;i<tamanio;i++){
        nuevo[i+1]=a[i];
    }
    //nuevo[pos]=elem;
    delete [] a;
    a=nuevo;
}
Hospital::~Hospital()
{
    delete []a;
}
