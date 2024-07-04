#include <stdio.h>
#include <iostream>
using namespace std;
int cola[10], n = 10, delante = -1, detras = -1;
int pila[10], np = 10, fondo = -1, tope = -1;
//funcion para agregar elementos
void Nuevo_elemento_cola(){
	int elemento;
	if(detras == n - 1)
		cout<<"Cola llena!"<<endl;
		else{
			if (delante == - 1)
			delante = 0;
			cout<<"Inserte un elemento en la cola: "<<endl;
			cin>>elemento;
			detras++;
			cola[detras] = elemento;
		}
}

void Borrar_elemento_cola(){
	if (delante == - 1 || delante > detras){
		cout<<"Cola vacia";
		return;
	}
	else{
		cout<<"El elemento borrado de la cola es: "<< cola[delante]<<endl;
		delante++;
	}
}

void Desplegar_cola(){
	if(delante == -1)
		cout<<"La cola esta vacia!"<<endl;
		else{
			cout<<"Los elementos en la cola son: ";
			for (int i = delante; i <= detras; i++){
				cout<<cola[i]<<" ";
				cout<<endl;
			}
		}
}

void Nuevo_elemento_pila(){
	int elementop;
	if(tope == np - 1)
		cout<<"Pila llena!"<<endl;
		else{
			if (fondo == - 1)
			fondo = 0;
			cout<<"Inserte un elemento en la pila: "<<endl;
			cin>>elementop;
			tope++;
			pila[tope] = elementop;
		}
}

void Borrar_elemento_pila(){
	if (fondo == - 1 || fondo > tope){
		cout<<"pila vacia"<<endl;
		return;
	}
	else{
		cout<<"El elemento borrado de la pila es: "<< pila[tope]<<endl;
		tope--;
	}
}

void Desplegar_pila(){
	if(fondo == -1)
		cout<<"La pila esta vacia!"<<endl;
		else{
			cout<<"Los elementos en la pila son: "<<endl;
			for (int j = tope; j>= fondo; j--){
				cout<<pila[j]<<" ";
				cout<<endl;
			}
		}
}


int main(int argc, char **argv)
{
	char pila_o_cola;
	printf("ADA 3.1 de Paradigmas de la Programacion\n");
	printf("\n");
	cout<<"Seleccione (A) para crear una cola o (B) para crear una pila";
	cin>>pila_o_cola;
	
	switch(pila_o_cola){
		case 'a':
		int op;
		cout<<"1) Insertar un elemento a la cola"<<endl;
		cout<<"2) Eliminar un elemento a la cola"<<endl;
		cout<<"3) Desplegar los elementos de la cola"<<endl;
		cout<<"4) Salir"<<endl;
		do{
			cout<<"Selecciona una opcion"<<endl;
			cin>> op;
			switch(op){
				case 1: Nuevo_elemento_cola();
				break;
				case 2: Borrar_elemento_cola();
				break;
				case 3: Desplegar_cola();
				break;
				case 4: cout <<"Salir"<<endl;
				break;
				default: cout<<"Seleccion invalida"<<endl;
			}
		}while(op!=4);
	return 0;
		break;
		case 'b':
		int opp;
		cout<<"1) Insertar un elemento a la pila"<<endl;
		cout<<"2) Eliminar un elemento a la pila"<<endl;
		cout<<"3) Desplegar los elementos de la pila"<<endl;
		cout<<"4) Salir"<<endl;
		do{
			cout<<"Selecciona una opcion"<<endl;
			cin>> opp;
			switch(opp){
				case 1: Nuevo_elemento_pila();
				break;
				case 2: Borrar_elemento_pila();
				break;
				case 3: Desplegar_pila();
				break;
				case 4: cout <<"Salir"<<endl;
				break;
				default: cout<<"Seleccion invalida"<<endl;
			}
		}while(opp!=4);
	return 0;
		break;
		default:
		cout<<"Selecciona una opcion valida";
		break;
	}
	return 0;
}
