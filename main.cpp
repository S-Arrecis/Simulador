#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include "Colas_Pilas.h"

using namespace std;
int numero;
int num;

struct cajas{
int Fa,Fb,Fc,Fd,Fe; //estas son las pilas
int total;			
int Ca,Cb,Cc,Cd,Ce; // estas son las colas
int Pa,Pb,Pc,Pd,Pe ;//variables libres que podes usar 	
		
}cjs[4];

void mostrarfinal();

void mostrarfinal(){
	
	while(num != 200){
		
			//system("cls");
			cout<<"\n\n"<<endl;
	cout<<endl<<" Pila 1: "<<cjs[0].Fa <<" "<<cjs[0].Fb<<" "<<cjs[0].Fc<<"			" 
		 		 " Pila 2: "<<cjs[1].Fa <<" "<<cjs[1].Fb<<" "<<cjs[1].Fc<<"			"
		 		 " Pila 3: "<<cjs[2].Fa <<" "<<cjs[2].Fb<<" "<<cjs[2].Fc<<"			"
		 		 " Pila 4: "<<cjs[3].Fa <<" "<<cjs[3].Fb<<" "<<cjs[3].Fc<<"			"
		  		 <<endl;

	cout<<endl<<"Caja 1(Total: "<<cjs[0].total <<")"<<"		"
			  <<"Caja 2(Total: "<<cjs[1].total <<")"<<"		"
			  <<"Caja 3(Total: "<<cjs[2].total <<")"<<"		"
			  <<"Caja 4(Total: "<<cjs[3].total <<")"<<"		"
			  <<endl;
		
	
	cout<<endl<<"	"<<cjs[0].Ca<<"				"
			  		 <<cjs[1].Ca<<"				"
			 		 <<cjs[2].Ca<<"				"
				     <<cjs[3].Ca<<endl;

	cout<<endl<<"	"<<cjs[0].Cb<<"				"
			  		 <<cjs[1].Cb<<"				"
			 		 <<cjs[2].Cb<<"				"
				     <<cjs[3].Cb<<endl;
		
	cout<<endl<<"	"<<cjs[0].Cc<<"				"
			  		 <<cjs[1].Cc<<"				"
			 		 <<cjs[2].Cc<<"				"
				     <<cjs[3].Cc<<endl;	
				     
	cout<<endl<<"	"<<cjs[0].Cd<<"				"
			  		 <<cjs[1].Cd<<"				"
			 		 <<cjs[2].Cd<<"				"
				     <<cjs[3].Cd<<endl;	
		
		
		
	//cout<<endl<<endl<<"	Policia: "; mostrar_Policia(frente,fin,numero);
	//<<cjs[0].Pa<<" "<<cjs[0].Pb<<" "<<cjs[0].Pc<<" "<<cjs[0].Pd<<" "<<cjs[0].Pe<<" "<<endl;
		
		
		
		
		
		

num=200;

//	Sleep(1000);

	}
	
}




int main(){
	

	numeros();
	
    mostrar_Policia(frente,fin,numero);
    mostrarC1(frente1,fin1,numero);
    mostrarC2(frente2,fin2,numero);
    mostrarC3(frente3,fin3,numero);
    mostrarC4(frente4,fin4,numero);
    
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
	
    mostrarfinal();
	return 0;
}
