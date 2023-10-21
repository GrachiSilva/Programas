//programa:seguridadtrescapas
//autor:grachi rodriguez
//fecha:06-10-2023
#include<iostream>
using namespace std;
int main()
{
	int c11,c12,c13,c01,c02,c03;
	int<<" ingrese c11 c12 c13, " ;
	cin>>c11>>c12>>c13;
	if(c11==c01){
		if(c12==c02){
			if(c13==c03){
				cout<<"acceso correcto";
			}else{
				cout<<"la clave 2 fallo" ;
			}
		}else{
			cout<<"la clave 1 fallo";
		}
		return(0);
	}
