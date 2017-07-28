#include <iostream>

using namespace std;

int Menu();

int Ejercicio1(int, int, int, int);

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
				Ejercicio1(x1, x2, y1, y2);
				break;	
		}
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

int Ejercicio1(int x1, int x2, int y1, int y2){
	
}//Ejercicio1()
