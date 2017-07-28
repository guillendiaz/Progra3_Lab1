#include <iostream>
#include <math.h>
using namespace std;

int Menu();

double Ejercicio1(int, int, int, int);
double Ejercicio2(int);
double AnguloaRadian
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
				int angulo;
				cout<<"Ingrese Ángulo: ";
				cin>>angulo;
						
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

double Ejercicio2(double angulo){
	double valor = 0;
	for(int i=0 ; i <= 10 ; i++){
		valor = (FuncionSenoNum(i) / FuncionSenoFac((2*i)+1))) * FuncionSenoMul(angulo, i);
	}//for
}//Ejercicio2()

double AnguloaRadian(int angulo){
	double valor = 0;
	valor = (angulo / 180) * 3.14;
	return valor
}//AnguloaRadian()

int FuncionSenoNum(int numero){
	int ValNum = -1;
	for(int i=0 ; int <= numero ; i++){
		ValNum*= -1;
	}//for
	return ValNum;
}//FuncionSenoNum()

int FuncionSenoFac(int numero){
	if(numero == 0){
		return 1;
	}else{
		return numero * FuncionSenoFac(numero-1);
	}//ifelse
}//FuncionSenoFac()

double FuncionSenoMul(double angulo, int exp){
	double valor = 0;
	for(int i=0 ; i <= exp ; i++){
		valor*= angulo;
	}//for
	return valor;
}//FuncionSenoMul()
