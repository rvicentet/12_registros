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
		cin>>EMPLEADO[i].nombre;
		for(int j=0;j<12;j++){
			cout<<"Ingrese las ventas del empleado: "<<endl;
			cin>>EMPLEADO[i].ventas[j];
		}
		cout<<"Ingrese el salario"<<endl;
		cin>>EMPLEADO[i].salario;
	}
	return 0;
}