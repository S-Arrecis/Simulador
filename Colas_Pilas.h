#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int cliente =0;
int C1[200];
int C2[200];
int C3[200];
int C4[200];

int totalC1=0;
int totalC2=0;
int totalC3=0;
int totalC4=0; 

int atendidoC1=0;
int atendidoC2=0;
int atendidoC3=0;
int atendidoC4=0;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

struct nodo{
    int dato;
    nodo *siguiente;
};

struct nodo2{
    int dato;
    nodo2 *siguiente;
};

struct nodo3{
    int dato;
    nodo3 *siguiente;
};

struct nodo4{
    int dato;
    nodo4 *siguiente;
};

Nodo *frente = NULL;
Nodo *fin = NULL;

nodo *frente1 = NULL;
nodo *fin1 = NULL;

nodo2 *frente2 = NULL;
nodo2 *fin2 = NULL;

nodo3 *frente3 = NULL;
nodo3 *fin3 = NULL;

nodo4 *frente4 = NULL;
nodo4 *fin4 = NULL;

void insertar_Policia(Nodo *&frente,Nodo *&fin,int numero);
void eliminar_Policia(Nodo *&frente, Nodo *&fin, int &numero);
void mostrar_Policia(Nodo *&frente, Nodo *&fin, int &numero);

void insertar_Cola1(nodo *&frente1,nodo *&fin1,int numero);
void eliminar_Cola1(nodo *&frente1, nodo *&fin1, int &numero);
void mostrarC1(nodo *&frente1, nodo *&fin1, int &numero);

void insertar_Cola2(nodo2 *&frente2,nodo2 *&fin2,int numero);
void eliminar_Cola2(nodo2 *&frente2, nodo2 *&fin2, int &numero);
void mostrarC2(nodo2 *&frente2, nodo2 *&fin2, int &numero);

void insertar_Cola3(nodo3 *&frente3,nodo3 *&fin3,int numero);
void eliminar_Cola3(nodo3 *&frente3, nodo3 *&fin3, int &numero);
void mostrarC3(nodo3 *&frente3, nodo3 *&fin3, int &numero);

void insertar_Cola4(nodo4 *&frente4,nodo4 *&fin4,int numero);
void eliminar_Cola4(nodo4 *&frente4, nodo4 *&fin4, int &numero);
void mostrarC4(nodo4 *&frente4, nodo4 *&fin4, int &numero);
void mostrarguardado();
// Funcion para escojer una caja al azar
void elegir(int n){	
	int opc=0;
	srand(time(NULL));
	
	opc	=  1 + rand() % (5 - 1);
	
	switch(opc){
		//cout<<"\t Cola: "<<opc<<" Numero= "<<n<<endl; cliente--;
		case 1:  insertar_Cola1(frente1,fin1,n);  break;
		case 2:  insertar_Cola2(frente2,fin2,n);  break;
		case 3:  insertar_Cola3(frente3,fin3,n);  break;
		case 4:  insertar_Cola4(frente4,fin4,n);  break;
	}	
}

void numeros(){
    int numero,contador;

    srand(time(NULL));
		
	for(contador = 0; contador < 20; contador++){
		if(cliente <=5){
		 numero =  1 + rand() % (91 - 1);
         //cout<<"\t\tNumero "<<numero<<" agregado con exito "<<endl;
         insertar_Policia(frente,fin,numero);
         cliente++;
		}
      
    }   
}

void insertar_Policia(Nodo *&frente,Nodo *&fin,int numero){
	
	cliente--;
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

void eliminar_Policia(Nodo *&frente, Nodo *&fin, int &numero){

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

  void mostrar_Policia(Nodo *&frente, Nodo *&fin, int &numero){
	cout<<"Policia: ";
	while (frente != NULL){
		
		
		eliminar_Policia(frente,fin,numero);
		Sleep(1000);
        if(frente != NULL){
         cout<<numero<<" ";   
        }
        else{
            cout<<numero<<" .";
        }
        
        elegir(numero);
        //insertar_Cola1(frente1,fin1,numero);
	}
    
}



//caja 1


//insertamos en cola caja1
void insertar_Cola1(nodo *&frente1,nodo *&fin1,int numero){
	
	cliente--;
    nodo *nuevo_nodo = new nodo();

    nuevo_nodo ->dato = numero;
    nuevo_nodo ->siguiente = NULL;

    if(frente1 == NULL){
        frente1 = nuevo_nodo;
    }
    else{
        fin1 ->siguiente = nuevo_nodo;
    }

    fin1 = nuevo_nodo;
}

//eliminamos de la caja1
void eliminar_Cola1(nodo *&frente1, nodo *&fin1, int &numero){

    numero = frente1->dato;
    nodo *temporal = frente1;
    //aux=numero;

    if(frente1 == fin1){
        frente1 = NULL;
        fin1 =NULL;
    }
    else{
        frente1 = frente1->siguiente;
    }

    delete temporal;
}



//mostramos de la caja 1
void mostrarC1(nodo *&frente1, nodo *&fin1, int &numero){
 	//cout<<"\nCaja1: ";
 	int i = 0;
	while (frente1 != NULL){
		
		Sleep(1000);
		eliminar_Cola1(frente1,fin1,numero);
			
        if(frente1 != NULL){
           //cout<<numero<<" ";
        C1[i] = numero;
           i = i+1;   
        }
        else{
       C1[i] = numero;
          //cout<<numero<<" .";
        }
        totalC1+=numero;
        atendidoC1++;
    }
    
}

void mostrarguardado(){
	
//	cout<<Ca[0]<<Ca[1]<<Ca[2]<<Ca[3]<<endl;
}


//caja2

//insertampos en la caja 2
void insertar_Cola2(nodo2 *&frente2,nodo2 *&fin2,int numero){
	
	cliente--;
    nodo2 *nuevo_nodo = new nodo2();

    nuevo_nodo ->dato = numero;
    nuevo_nodo ->siguiente = NULL;

    if(frente2 == NULL){
        frente2 = nuevo_nodo;
    }
    else{
        fin2 ->siguiente = nuevo_nodo;
    }

    fin2 = nuevo_nodo;
}

//eliminamos de la caja 2
void eliminar_Cola2(nodo2 *&frente2, nodo2 *&fin2, int &numero){

    numero = frente2->dato;
    nodo2 *temporal = frente2;

    if(frente2 == fin2){
        frente2 = NULL;
        fin2 =NULL;
    }
    else{
        frente2 = frente2->siguiente;
    }

    delete temporal;
}



//mostramos a la caja 2
  void mostrarC2(nodo2 *&frente2, nodo2 *&fin2, int &numero){
	//cout<<"\nCaja2: ";
	 	int i = 0;
	while (frente2 != NULL){
		
		eliminar_Cola2(frente2,fin2,numero);
		
		Sleep(1000);
        if(frente2 != NULL){
         //cout<<numero<<" "; 
		    C2[i] = numero;
           i = i+1;     
        }
        else{
        	C2[i] = numero;
            //cout<<numero<<" .";
        }
        totalC2+=numero;
         atendidoC2++;
	}
    
}

//insertampos en la caja 3
void insertar_Cola3(nodo3 *&frente3,nodo3 *&fin3,int numero){
	cliente--;
    nodo3 *nuevo_nodo = new nodo3();

    nuevo_nodo ->dato = numero;
    nuevo_nodo ->siguiente = NULL;

    if(frente3 == NULL){
        frente3 = nuevo_nodo;
    }
    else{
        fin3 ->siguiente = nuevo_nodo;
    }

    fin3 = nuevo_nodo;
}

//eliminamos de la caja 3
void eliminar_Cola3(nodo3 *&frente3, nodo3 *&fin3, int &numero){

    numero = frente3->dato;
    nodo3 *temporal = frente3;

    if(frente3 == fin3){
        frente3 = NULL;
        fin3 =NULL;
    }
    else{
        frente3 = frente3->siguiente;
    }

    delete temporal;
}



//mostramos a la caja 3
  void mostrarC3(nodo3 *&frente3, nodo3 *&fin3, int &numero){
	//cout<<"\nCaja3: ";
		int i = 0;
	while (frente3 != NULL){
		
		eliminar_Cola3(frente3,fin3,numero);
		
		Sleep(1000);
        if(frente3 != NULL){
         //cout<<numero<<" ";  
		    C3[i] = numero;
           i = i+1;   
        }
        else{
        	 C3[i] = numero;
            //cout<<numero<<" .";
        }
        totalC3+=numero;
         atendidoC3++;
	}
    
}

//insertampos en la caja 4
void insertar_Cola4(nodo4 *&frente4,nodo4 *&fin4,int numero){
	
	cliente--;
    nodo4 *nuevo_nodo = new nodo4();

    nuevo_nodo ->dato = numero;
    nuevo_nodo ->siguiente = NULL;

    if(frente4 == NULL){
        frente4 = nuevo_nodo;
    }
    else{
        fin4 ->siguiente = nuevo_nodo;
    }

    fin4 = nuevo_nodo;
}

//eliminamos de la caja 4
void eliminar_Cola4(nodo4 *&frente4, nodo4 *&fin4, int &numero){

    numero = frente4->dato;
    nodo4 *temporal = frente4;

    if(frente4 == fin4){
        frente4 = NULL;
        fin4 =NULL;
    }
    else{
        frente4 = frente4->siguiente;
    }

    delete temporal;
}



//mostramos a la caja 4
  void mostrarC4(nodo4 *&frente4, nodo4 *&fin4, int &numero){
	//cout<<"\nCaja4: ";
		int i = 0;
	while (frente4 != NULL){
		
		eliminar_Cola4(frente4,fin4,numero);
		
		Sleep(1000);
        if(frente4 != NULL){
         //cout<<numero<<" "; 
		     C4[i] = numero;
           i = i+1;    
        }
        else{
        	C4[i] = numero;
            //cout<<numero<<" .";
        }
        totalC4+=numero;
         atendidoC4++;
	}
    
}
