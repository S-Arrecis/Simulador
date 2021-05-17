#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include "Colas_Pilas.h"
#include <thread>

using namespace std;
int numero;
int num;

struct cajas{
int Fa,Fb,Fc,Fd,Fe; //estas son las pilas
int total;			
int Ca,Cb,Cc,Cd,Ce; // estas son las colas
int Pa,Pb,Pc,Pd,Pe;//variables libres que podes usar 	
		
}cjs[4];

void mostrarfinal();

void mostrarfinal(){
	
	while(num != 200){
		
	/*	totalC1 = C1[0]+C1[1]+C1[2]+C1[3]+C1[4];
		totalC2 = C2[0]+C2[1]+C2[2]+C2[3]+C2[4];
		totalC3 = C3[0]+C3[1]+C3[2]+C3[3]+C3[4];
		totalC4 = C4[0]+C4[1]+C4[2]+C4[3]+C4[4];
		
		*/
		
		
		
		
		
			system("cls");
			cout<<"\n\n"<<endl;
	cout<<endl<<"Pila 1: "<<P1[0] <<" "<<P1[1]<<" "<<P1[2]<<" "<<P1[3]<<" "<<P1[4]<<" 		" 
		 		 "Pila 2: "<<P2[0] <<" "<<P2[1]<<" "<<P2[2]<<" "<<P2[3]<<" "<<P2[4]<<"	       "
		 		 "Pila 3: "<<P3[0] <<" "<<P3[1]<<" "<<P3[2]<<" "<<P3[3]<<" "<<P3[4]<<"		"
		 		 "Pila 4: "<<P4[0] <<" "<<P4[1]<<" "<<P4[2]<<" "<<P4[3]<<" "<<P4[4]<<"		"
		  		 <<endl;
	
	/*cout<<endl<<" Pila 1: "<<cjs[0].Fa <<" "<<cjs[0].Fb<<" "<<cjs[0].Fc<<"			" 
		 		 " Pila 2: "<<cjs[1].Fa <<" "<<cjs[1].Fb<<" "<<cjs[1].Fc<<"			"
		 		 " Pila 3: "<<cjs[2].Fa <<" "<<cjs[2].Fb<<" "<<cjs[2].Fc<<"			"
		 		 " Pila 4: "<<cjs[3].Fa <<" "<<cjs[3].Fb<<" "<<cjs[3].Fc<<"			"
		  		 <<endl;*/

	cout<<endl<<"Caja 1(Total: "<<totalC1 <<")"<<"		"
			  <<"Caja 2(Total: "<<totalC2 <<")"<<"		"
			  <<"Caja 3(Total: "<<totalC3 <<")"<<"		"
			  <<"Caja 4(Total: "<<totalC4 <<")"<<"		"
			  <<endl;
		
	
	cout<<endl<<"	"<<C1[0]<<"				"
			  		 <<C2[0]<<"				"
			 		 <<C3[0]<<"				"
				     <<C4[0]<<endl;

	cout<<endl<<"	"<<C1[1]<<"				"
			  		 <<C2[1]<<"				"
			 		 <<C3[1]<<"				"
				     <<C4[1]<<endl;
		
	cout<<endl<<"	"<<C1[2]<<"				"
			  		 <<C2[2]<<"				"
			 		 <<C3[2]<<"				"
				     <<C4[2]<<endl;	
				     
	cout<<endl<<"	"<<C1[3]<<"				"
			  		 <<C2[3]<<"				"
			 		 <<C3[3]<<"				"
				     <<C4[3]<<endl;	
		
	cout<<endl<<"	"<<C1[4]<<"				"
			  		 <<C2[4]<<"				"
			 		 <<C3[4]<<"				"
				     <<C4[4]<<endl;	
		
		
		
		
		
		
		
		
		
		
	cout<<endl<<endl<<"	Policia: "
	<<Cop[0]<<" "<<Cop[1]<<" "<<Cop[2]<<" "<<Cop[3]<<" "<<Cop[4]<<" "
	<<Cop[5]<<" "<<Cop[6]<<" "<<Cop[7]<<" "<<Cop[8]<<" "<<Cop[9]<<" "
	<<Cop[10]<<" "<<Cop[11]<<" "<<Cop[12]<<" "<<Cop[13]<<" "<<Cop[14]<<" "
	<<Cop[15]<<" "<<Cop[16]<<" "<<Cop[17]<<" "<<Cop[18]<<" "<<Cop[19]<<" "

	<<endl;
		
cout<<atendidoC1<<endl;
		
		


//num=200;

Sleep(1000);

	}
	
}

void mostrarPolicia(){
	mostrar_Policia(frente,fin,numero);
}

void mostrarCaja1(){
	mostrarC1(frente1,fin1,numero);
}

void mostrarCaja2(){
	mostrarC2(frente2,fin2,numero);
}

void mostrarCaja3(){
	mostrarC3(frente3,fin3,numero);
}

void mostrarCaja4(){
	mostrarC4(frente4,fin4,numero);
}

void mostrarP1(){
	mostrarPila1(caja1,numero);
}

void mostrarP2(){
	mostrarPila2(caja2,numero);
}

void mostrarP3(){
	mostrarPila3(caja3,numero);
}

void mostrarP4(){
	mostrarPila4(caja4,numero);
}

int main(){
	

	
		thread n(numeros);	
		
   thread mtr(mostrarfinal);
	
	
thread hilo1(mostrarPolicia);
	thread hilo2(mostrarCaja1);
	thread hilo3(mostrarCaja2);
	thread hilo4(mostrarCaja3);
	thread hilo5(mostrarCaja4);
	thread hilo6(mostrarP1);
	thread hilo7(mostrarP2);
	thread hilo8(mostrarP3);
	thread hilo9(mostrarP4);
	

    /*mostrar_Policia(frente,fin,numero);
   mostrarC1(frente1,fin1,numero);
     mostrarC2(frente2,fin2,numero);
     mostrarC3(frente3,fin3,numero);
   mostrarC4(frente4,fin4,numero);
   mostrarPila1(caja1,numero);
   mostrarPila2(caja2,numero);
   mostrarPila3(caja3,numero);
   mostrarPila4(caja4,numero);*/
  
    


n.join();
hilo1.join();
hilo2.join();
hilo3.join();
hilo4.join();
hilo5.join();
hilo6.join();
hilo7.join();
hilo8.join();
hilo9.join();

mtr.join();
	return 0;
}
