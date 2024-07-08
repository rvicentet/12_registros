//Renzo Julian Vicente Ticona
//2024-119053
#include<iostream>
using namespace std;

struct EMP{
	int numero;
	string nombre;
	float ventas[12];
	float salario;
};

int main(){
	EMP EMPLEADO[50];
	int n;
	cout<<"Ingrede n: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero y nombre: "<<endl;
		cin>>EMPLEADO[i].numero;
		cin.ignore();
		getline(cin,EMPLEADO[i].nombre);
		cout<<"Ingrese las ventas del empleado: "<<endl;
		for(int j=0;j<12;j++){
			cin>>EMPLEADO[i].ventas[j];
		}
		cout<<"Ingrese el salario"<<endl;
		cin>>EMPLEADO[i].salario;
	}
	for(int i=0;i<n;i++){
		cout<<"Numero: "<<EMPLEADO[i].numero<<endl;
		cout<<"Nombre: "<<EMPLEADO[i].nombre<<endl;
		cout<<"Ventas: ";
		for(int j=0;j<12;j++){
			cout<<EMPLEADO[i].ventas[j]<<" ";
		}
		cout<<endl;
		cout<<"Salario: "<<EMPLEADO[i].salario<<endl;
	}
	return 0;
}