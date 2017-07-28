#include <iostream>
#include <math.h>
using namespace std;

int Menu();

double Ejercicio1(int, int, int, int);
double Ejercicio2Seno(double);
double Ejercicio2Coseno(double);
int main(){
	int opcion = 0;
	do{
		switch(opcion = Menu()){
			case 1:
				int x1;
				int x2;
				int y1;
				int y2;
				cout<<"Ingrese X1: ";
				cin>>x1;
				cout<<"Ingrese X2: ";
				cin>>x2;
				cout<<"Ingrese Y1: ";
				cin>>y1;
				cout<<"Ingrese Y2: ";
				cin>>y2;
				cout<<"Valor es: "<<Ejercicio1(x1, x2, y1, y2)<<endl;
				break;
			case 2:
				double angulo;
				cout<<"Ingrese Ángulo: ";
				cin>>angulo;
				cout<<angulo<<" Valor en Seno: "<<Ejercicio2Seno(angulo)<<" Valor en Coseno: "<<Ejercicio2Coseno(angulo)<<endl;
						
		}//switch
	}while(opcion != 4);
	return 0;
}//main()

int Menu(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Menu"<<endl
		<<"1. Ejercicio 1"<<endl
		<<"2. Ejercicio 2"<<endl
		<<"3. Ejercicio 3"<<endl
		<<"4. Salir"<<endl;
		cin>> opcion;
		
		if(opcion < 1 || opcion > 4){
			cout<<"Opcion Invalida"<<endl;
			opcion = 0;
		}//if
	}//while
}//Menu()

double Ejercicio1(int x1, int x2, int y1, int y2){
		double valor = 0;
		valor = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		return valor;
}//Ejercicio1()

int FuncionFac(int numero){
	if(numero == 0){
		return 1;
	}else{
		return numero * FuncionFac(numero-1);
	}//ifelse
}//FuncionFac()

double Ejercicio2Seno(double angulo){
	double radian = (angulo / 180) * 3.141592;
	double valor = 0;
	for(int i=0 ; i <= 20 ; i++){
		valor+= (pow(-1, i) / FuncionFac((2*i)+1)) * pow(radian, ((2*i)+1));
	}//for
	return valor;
}//Ejercicio2Seno()

double Ejercicio2Coseno(double angulo){
	double radian = (angulo / 180) * 3.141592;
	int valor=0;
	for(int i = 0 ; i<= 20 ; i++){
		valor+= (pow(-1, i) / FuncionFac((2*i))) * pow(radian, (2*i));
		cout<<valor;
	}//for
	return valor;
}//Ejercicio2Coseno
