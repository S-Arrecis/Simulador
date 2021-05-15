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
	cout<<endl<<" Pila 1: "<<cjs[0].Fa <<" "<<cjs[0].Fb<<" "<<cjs[0].Fc<<"			" 
		 		 " Pila 2: "<<cjs[1].Fa <<" "<<cjs[1].Fb<<" "<<cjs[1].Fc<<"			"
		 		 " Pila 3: "<<cjs[2].Fa <<" "<<cjs[2].Fb<<" "<<cjs[2].Fc<<"			"
		 		 " Pila 4: "<<cjs[3].Fa <<" "<<cjs[3].Fb<<" "<<cjs[3].Fc<<"			"
		  		 <<endl;

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




int main(){
	
thread mtr(mostrarfinal);

	numeros();	
    mostrar_Policia(frente,fin,numero);
    mostrarC1(frente1,fin1,numero);
    mostrarC2(frente2,fin2,numero);
    mostrarC3(frente3,fin3,numero);
    mostrarC4(frente4,fin4,numero);
 /*      
cjs[0].Ca = C1[0];
cjs[0].Cb = C1[1];	
cjs[0].Cc = C1[2];
cjs[0].Cd = C1[3];

cjs[1].Ca = C2[0];
cjs[1].Cb = C2[1];	
cjs[1].Cc = C2[2];
cjs[1].Cd = C2[3];

cjs[2].Ca = C3[0];
cjs[2].Cb = C3[1];	
cjs[2].Cc = C3[2];
cjs[2].Cd = C3[3];

cjs[3].Ca = C4[0];
cjs[3].Cb = C4[1];	
cjs[3].Cc = C4[2];
cjs[3].Cd = C4[3];

cjs[0].total = totalC1;
cjs[1].total = totalC2;
cjs[2].total = totalC3;
cjs[3].total = totalC4;
*/	

mtr.join();
	return 0;
}
