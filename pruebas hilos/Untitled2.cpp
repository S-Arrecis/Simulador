#include<iostream>
#include<thread>
#include"Policia.h"
#include<windows.h>


using namespace std;

void caja_1();
void caja_2();
void caja_3();
void caja_4();
void mostrar2();

int caja1 = 0;
int caja2 = 0;
int caja3 = 0;
int caja4 = 0;

struct cajas{
int Fa,Fb,Fc,Fd,Fe; //estas son las pilas
int total;			
int Ca,Cb,Cc,Cd,Ce; // estas son las colas
int Pa,Pb,Pc,Pd,Pe ;//variables libres que podes usar 	
		
}cjs[4];




void caja_1(){

while (caja1 != 100){
	
	caja1 = caja1 + 1;
	Sleep(1000);
	
}
	
};
void caja_2(){
	
while (caja2 != 100){
	
	caja2 = caja2 + 2;
	Sleep(1000);
	}
		
};

void caja_3(){
while (caja3 != 100){
	
	caja3 = caja3 + 3;
	Sleep(1000);
	}

};	
void caja_4(){
while (caja4 != 100){
	
	caja4 = caja4 + 4;
	Sleep(1000);
	}
	
};
void mostrar2(){
	
	while(caja4 != 100){
		
			system("cls");
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
		
		
		
	cout<<endl<<endl<<"	Policia: ";
	//<<cjs[0].Pa<<" "<<cjs[0].Pb<<" "<<cjs[0].Pc<<" "<<cjs[0].Pd<<" "<<cjs[0].Pe<<" "<<endl;
		
		
		
		
		
		


numeros();
int numero;
mostrar(frente,fin,numero);


		
	
	cout<<endl<<"caja1: "<<caja1<<"    Caja2: "<<caja2<<"    Caja3: "<<caja3<<"    Caja4: "<<caja4<<endl;

	Sleep(1000);

	}
	
};





int main(){
	
cjs[2].Ca = 1;
cjs[0].Fb = 2;	
	
	
thread c1(caja_1);
thread c2(caja_2);
thread c3(caja_3);
thread c4(caja_4);
thread mtr(mostrar2);



c1.join();
c2.join();
c3.join();
c4.join();
mtr.join();

return 0;
}
