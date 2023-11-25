//programa:tabla de multiplicar
//autor:grachi rodriguez
//fecha:2023-11-24
#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cout<<" ingrese n: " ;cin>> n;
	do{
		i=i+1;
		cout<<i<<"*"<<n<<"="<<i*n<<endl;
	}while(i<10);
	cout<<endl;
	return(0);
}
