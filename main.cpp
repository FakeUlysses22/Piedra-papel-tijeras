#include<iostream>

using namespace std;


int main(){

int numero;
int maximo;
int usrnumero;
char Piedra1;
char Papel2;
char Tijeras3;
char Piedra4;
char Papel5;
char Tijeras6;
char ms;
char us;
	cout<<"Bienvenido a piedra papel o tijeras"<<endl;
	cout<<""<<endl;
	cout<<"ELIGA UN OPCION CONTRA LA MAQUINA(numero)"<<endl;
	cout<<"1.Piedra"<<endl;
	cout<<"2.Papel"<<endl;
	cout<<"3.Tijeras"<<endl;
	cout<<"Eliga un numero: "<<endl; cin>>usrnumero;



maximo = 2;
srand(time(0));
numero = rand()%maximo;


switch(numero){

	case 0:
	ms = Piedra1;
	break;

	case 1:
	ms = Papel2;
	break;
	
	case 2:
	ms = Tijeras3;
	break;
}

switch(usrnumero){

	case 1:
	us = Piedra4;
	break;
	
	case 2:
	us = Papel5;
	break;

	case 3:
	us = Tijeras6;
	break;

}

if (ms == Piedra1 && us == Piedra4){
	cout<<""<<endl;
	cout<<"Maquina = Piedra"<<endl;
	cout<<"Humano = Piedra"<<endl;
	cout<<"Resultado = Empate"<<endl;

}

else if (ms == Piedra1 && us == Tijeras6){
	cout<<""<<endl;
	cout<<"Maquina = Piedra"<<endl;
	cout<<"Humano = Tijeras"<<endl;
	cout<<"Resultado = Maquina gana"<<endl;

}

else if (ms == Piedra1 && us == Papel5){
	cout<<""<<endl;
	cout<<"Maquina = Piedra"<<endl;
	cout<<"Humano = Papel"<<endl;
	cout<<"Resultado = Gana humano"<<endl;

}

else if (ms == Tijeras3 && us == Piedra4){
	cout<<""<<endl;
	cout<<"Maquina = Tijeras"<<endl;
	cout<<"Humano = Piedra"<<endl;
	cout<<"Resultado = Gana Humano"<<endl;

}

else if (ms == Tijeras3 && us == Tijeras6){
	cout<<""<<endl;
	cout<<"Maquina = Tijeras"<<endl;
	cout<<"Humano = Tijeras"<<endl;
	cout<<"Resultado = Empate"<<endl;

}

else if (ms == Tijeras3 && us == Papel5){
	cout<<""<<endl;
	cout<<"Maquina = Tijeras"<<endl;
	cout<<"Humano = Papel"<<endl;
	cout<<"Resultado = Gana humano"<<endl;

}

else if (ms == Papel2 && us == Piedra4){
	cout<<""<<endl;
	cout<<"Maquina = Papel"<<endl;
	cout<<"Humano = Piedra"<<endl;
	cout<<"Resultado = Gana maquina"<<endl;

}

else if (ms == Papel2 && us == Tijeras6){
	cout<<""<<endl;
	cout<<"Maquina = Papel"<<endl;
	cout<<"Humano = Tijeras"<<endl;
	cout<<"Resultado = Gana humano"<<endl;

}

else if (ms == Papel2 && us == Papel5){
	cout<<""<<endl;
	cout<<"Maquina = Papel"<<endl;
	cout<<"Humano = Papel"<<endl;
	cout<<"Resultado = Empate"<<endl;

}

else{

	cout<<"Rompiste la matrix";
}


	return 0;
}
