#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <thread>

using namespace std;

int cliente =0;
int C1[200];
int C2[200];
int C3[200];
int C4[200];
int Cop[200];

int P1[200];
int P2[200];
int P3[200];
int P4[200];
//int Cop[200];

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

struct pila1{
	int dato;
	pila1 *siguiente;
};

struct pila2{
	int dato;
	pila2 *siguiente;
};

struct pila3{
	int dato;
	pila3 *siguiente;
};

struct pila4{
	int dato;
	pila4 *siguiente;
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

pila1 *caja1 =NULL;
pila2 *caja2 = NULL;
pila3 *caja3 = NULL;
pila4 *caja4 = NULL;


void atp();
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

void agregarPila1(pila1 *&,int);
void sacarPila1(pila1*&,int &);
void mostrarPila1(pila1 *&,int &);

void agregarPila2(pila2 *&,int);
void sacarPila2(pila2 *&,int &);
void mostrarPila2(pila2 *&,int &);


void agregarPila3(pila3 *&,int);
void sacarPila3(pila3*&,int &);
void mostrarPila3(pila3 *&,int &);


void agregarPila4(pila4 *&,int);
void sacarPila4(pila4 *&, int &);
void mostrarPila4(pila4 *&,int &);





// Funcion para escojer una caja al azar
void elegir(int n){	



	int opc=0;
	srand(time(NULL));
	
	opc	=  1 + rand() % (5 - 1);
	
	
	
	
	if (atendidoC1 >=5){
		opc =2;
		if(atendidoC2 >=5){
			opc=3;
			if(atendidoC3 >=5){	
				opc=4;}}}
				
		if (atendidoC2 >=5){
		opc =3;
		if(atendidoC3 >=5){
			opc=4;
			if(atendidoC4 >=5){	
				opc=1;}}}					
	
		if (atendidoC3 >=5){
		opc =4;
		if(atendidoC4 >=5){
			opc=1;
			if(atendidoC1 >=5){	
				opc=2;}}}
		
			if (atendidoC4 >=5){
		opc =1;
		if(atendidoC1 >=5){
			opc=2;
			if(atendidoC2 >=5){	
				opc=3;}}}
	

	
	
	switch(opc){
		//cout<<"\t Cola: "<<opc<<" Numero= "<<n<<endl; cliente--;
		case 1:  insertar_Cola1(frente1,fin1,n);
		break;
		case 2:  insertar_Cola2(frente2,fin2,n);
		break;
		case 3: insertar_Cola3(frente3,fin3,n);
		break;
		case 4: insertar_Cola4(frente4,fin4,n);
		break;
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
	int i = 0;
	while (frente != NULL){
		
		
		eliminar_Policia(frente,fin,numero);
		Sleep(1000);
        if(frente != NULL){
         cout<<numero<<" ";  
		  Cop[i] = numero;
           i = i+1;   
        }
        else{
        	Cop[i] = numero;
            cout<<numero<<" .";
        }
        
        elegir(numero);
        //insertar_Cola1(frente1,fin1,numero);
	}
    
}



//caja 1

int i = 0;
//insertamos en cola caja1
void insertar_Cola1(nodo *&frente1,nodo *&fin1,int numero){
		
	  C1[i] = numero;
	  
           i = i+1;
           
            agregarPila1(caja1,numero);
        	mostrarPila1(caja1,numero);
		   //totalC1+=numero;   
	atendidoC1 = atendidoC1 +1;
	
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
 	//int i = 0;
	while (frente1 != NULL){
		
		Sleep(1000);
		eliminar_Cola1(frente1,fin1,numero);
			
        if(frente1 != NULL){
           //cout<<numero<<" ";
       // C1[i] = numero;
         //  i = i+1;   
        }
        else{
      // C1[i] = numero;
          //cout<<numero<<" .";
        }
        //totalC1+=numero;
        //atendidoC1++;
        
         // agregarPila1(caja1,numero);
       //thread at(atp);
        
    }
    
}


void agregarPila1(pila1 *&caja1, int numero){
	totalC1+=numero;
	pila1 *nuevo_nodo = new pila1();
	nuevo_nodo ->dato = numero;
	nuevo_nodo ->siguiente = caja1;
	caja1= nuevo_nodo;
	

}

void sacarPila1(pila1 *&caja1, int &numero){
	
	pila1 *aux = caja1;
	numero = aux->dato;
	caja1 = aux->siguiente;
	delete aux;
	mostrarPila1(caja1,numero);
}

int pi1=0;

void mostrarPila1(pila1 *&caja1,int &numero){
	
	while (caja1 != NULL){
		sacarPila1(caja1,numero);
		Sleep(2000);
		//totalC1+=numero;
		P1[pi1]=numero;
	//	C1[pi1]=0;
		pi1++;	
	}
	
}

























//caja2
int i2 =0;
//insertampos en la caja 2
void insertar_Cola2(nodo2 *&frente2,nodo2 *&fin2,int numero){
	  C2[i2] = numero;
           i2 ++; 
            agregarPila2(caja2,numero);
        	mostrarPila2(caja2,numero);
		   //totalC2+=numero;  
           atendidoC2 ++;
	
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
	 //	int i = 0;
	while (frente2 != NULL){
		
		eliminar_Cola2(frente2,fin2,numero);
		
		Sleep(1000);
        if(frente2 != NULL){
         //cout<<numero<<" "; 
		   // C2[i] = numero;
           //i = i+1;     
        }
        else{
        //	C2[i] = numero;
            //cout<<numero<<" .";
        }
        //totalC2+=numero;
         //atendidoC2++;
         agregarPila2(caja2,numero);
	}
    
}

//insertampos en la caja 3
int i3 =0;
void insertar_Cola3(nodo3 *&frente3,nodo3 *&fin3,int numero){
	 C3[i3] = numero;
           i3 ++;  
           
              agregarPila3(caja3,numero);
        	mostrarPila3(caja3,numero);
          // totalC3+=numero;
		   atendidoC3 ++;
	 
	
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
	//	int i = 0;
	while (frente3 != NULL){
		
		eliminar_Cola3(frente3,fin3,numero);
		
		Sleep(1000);
        if(frente3 != NULL){
         //cout<<numero<<" ";  
		   // C3[i] = numero;
         //  i = i+1;   
        }
        else{
        	// C3[i] = numero;
            //cout<<numero<<" .";
        }
        //totalC3+=numero;
         //atendidoC3++;
         agregarPila3(caja3,numero);
	}
    
}

//insertampos en la caja 4
int i4 = 0;
void insertar_Cola4(nodo4 *&frente4,nodo4 *&fin4,int numero){
		 C4[i4] = numero;
           i4 ++;  
              agregarPila4(caja4,numero);
        	mostrarPila4(caja4,numero);
           //totalC4+=numero;
           atendidoC4 ++;
	
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
		//int i = 0;
	while (frente4 != NULL){
		
		eliminar_Cola4(frente4,fin4,numero);
		
		Sleep(1000);
        if(frente4 != NULL){
         //cout<<numero<<" "; 
		    // C4[i] = numero;
           //i = i+1;    
        }
        else{
        	C4[i] = numero;
            //cout<<numero<<" .";
        }
        //totalC4+=numero;
         //atendidoC4++;
         agregarPila4(caja4,numero);
	}   
}


/*
void agregarPila1(pila1 *&caja1, int numero){
	totalC1+=numero;
	pila1 *nuevo_nodo = new pila1();
	nuevo_nodo ->dato = numero;
	nuevo_nodo ->siguiente = caja1;
	caja1= nuevo_nodo;
	

}

void sacarPila1(pila1 *&caja1, int &numero){
	
	pila1 *aux = caja1;
	numero = aux->dato;
	caja1 = aux->siguiente;
	delete aux;
	
}

int pi1=0;

void mostrarPila1(pila1 *&caja1,int &numero){
	
	while (caja1 != NULL){
		sacarPila1(caja1,numero);
		Sleep(2000);
		//totalC1+=numero;
		P1[pi1]=numero;
		C1[pi1]=0;
		pi1++;	
	}
	
}

*/








void agregarPila2(pila2 *&caja2, int numero){
	totalC2+=numero;
	pila2 *nuevo_nodo = new pila2();
	nuevo_nodo ->dato = numero;
	nuevo_nodo->siguiente = caja2;
	caja2 = nuevo_nodo;

}

void sacarPila2(pila2 *&caja2, int &numero){
	
	pila2 *aux = caja2;
	numero = aux->	dato;
	caja2 = aux ->siguiente;
	delete aux;
	
}
int pi2=0;
void mostrarPila2(pila2 *&caja2,int &numero){
	
	while (caja2 != NULL){
		sacarPila2(caja2,numero);
		Sleep(2000);
		//totalC2+=numero;
		P2[pi2]=numero;
	//	C2[pi2]=0;
		pi2++;	
	}
	
}


void agregarPila3(pila3 *&caja3, int numero){
	totalC3+=numero;
	pila3 *nuevo_nodo = new pila3();
	nuevo_nodo ->dato = numero;
	nuevo_nodo->siguiente = caja3;
	caja3 = nuevo_nodo;

}

void sacarPila3(pila3 *&caja3, int &numero){
	
	pila3 *aux = caja3;
	numero = aux->	dato;
	caja3 = aux ->siguiente;
	delete aux;
	
}
int pi3=0;
void mostrarPila3(pila3 *&caja3,int &numero){
	
	while (caja3 != NULL){
		sacarPila3(caja3,numero);
		Sleep(2000);
	//	totalC3+=numero;
		P3[pi3]=numero;
	//	C3[pi3]=0;
		pi3++;	
	}
	
}

void agregarPila4(pila4 *&caja4, int numero){
	totalC4+=numero;
	pila4 *nuevo_nodo = new pila4();
	nuevo_nodo ->dato = numero;
	nuevo_nodo->siguiente = caja4;
	caja4 = nuevo_nodo;

}

void sacarPila4(pila4 *&caja4, int &numero){
	
	pila4 *aux = caja4;
	numero = aux->	dato;
	caja4 = aux ->siguiente;
	delete aux;
	
}
int pi4=0;
void mostrarPila4(pila4 *&caja4,int &numero){
	
	while (caja4 != NULL){
		sacarPila4(caja4,numero);
		Sleep(2000);
		//totalC4+=numero;
		P4[pi4]=numero;
	//	C4[pi4]=0;
		pi4++;	
	}
	
}
