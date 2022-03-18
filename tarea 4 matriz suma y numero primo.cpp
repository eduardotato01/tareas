#include<iostream>
#include<conio.h>

using namespace std;

int main(){

 int numeros[100][100],filas,columnas;
 int suma = 0,i, numero, cont=0;
 
 cout<<"Digite el numero de filas: "; cin>>filas;
 cout<<"Digite el numero de columnas: "; cin>>columnas;
 
 for(int i=0;i<filas;i++){
 for(int j=0;j<columnas;j++){
	
	
 cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
 cin>>numeros[i][j];

 }

 } 

 cout<<"\nMostrando matriz\n\n";

 for(int i=0;i<filas;i++){
 for(int j=0;j<columnas;j++){

 cout<<numeros[i][j];
 cout<<"\nMostrando matriz\n\n";
 suma += numeros[i][j];
 
 cout<<"la suma de la matriz es igual a"<<suma<<endl;
 }

 cout<<"\n";

 }
 
 for(i=1;i<=suma;i++){
		if(suma%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"\n El numero no es primo";
	}
	else{
		cout<<"\n El numero es primo";
	}
 
 
 getch();
 return 0;

}
