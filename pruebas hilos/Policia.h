#include<iostream>
#include<windows.h>
#include <time.h>
#include <stdlib.h>


using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

Nodo *frente = NULL;
Nodo *fin = NULL;

void insertar_Cola(Nodo *&,Nodo *&,int);
void eliminar_Cola(Nodo *&, Nodo *&, int &);
void mostrar(Nodo *&, Nodo *&, int &);

void numeros(){
    int numero,contador;

    srand(time(NULL));
		
	for(contador = 0; contador < 200; contador++){
        numero =  1 + rand() % (91 - 1);
      //cout<<"\t\tNumero "<<numero<<" agregado con exito "<<endl;
        insertar_Cola(frente,fin,numero);
    }

	
	
   
}

void insertar_Cola(Nodo *&frente,Nodo *&fin,int numero){

    Nodo *nuevo_Nodo = new Nodo();

    nuevo_Nodo ->dato = numero;
    nuevo_Nodo ->siguiente = NULL;

    if(frente == NULL){
        frente = nuevo_Nodo;
    }
    else{
        fin ->siguiente = nuevo_Nodo;
    }

    fin = nuevo_Nodo;
}

void eliminar_Cola(Nodo *&frente, Nodo *&fin, int &numero){

    numero = frente->dato;
    Nodo *temporal = frente;

    if(frente == fin){
        frente = NULL;
        fin =NULL;
    }
    else{
        frente = frente->siguiente;
    }

    delete temporal;
}

void mostrar(Nodo *&frente, Nodo *&fin, int &numero){
    int cliente=0;
	while (frente != NULL){
		
		if(cliente<=5){
			eliminar_Cola(frente,fin,numero);
			
			Sleep(1000);
         if(frente != NULL){
        	
           cout<<numero<<" ";
            
           
           }
          else{
            cout<<numero<<" .";
          }
          cliente++;
		}
		else{
			//cliente--;
		}
    }
    
}
    
