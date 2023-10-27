#include<cstring>
#include<iostream>
using namespace std;
int main()
{
string producto[3];
float precio[3], final[3];
int  cantidad[3];
cout<<"ingrese el primer producto:"; getline(cin,producto[0]);
cout<<"ingresar el segundo producto:"; getline(cin,producto[1]);
cout<<"ingrese el tercer producto:"; getline(cin,producto[2]);
cout<<"ingrese el precio del primer:"; cin>>precio[0];
cout<<"ingrese el precio del segundo:"; cin>>precio[1];
cout<<"ingrese el precio del trecer:"; cin>>precio[2];
cout<<"ingrese la cantidad del primer:"; cin>>cantidad[0];
cout<<"ingrese la cantidad del segundo:"; cin>>cantidad[1];
cout<<"ingrese la cantidad del tercer:"; cin>>cantidad[2];
final[0]= precio[0]* cantidad[0];
final[1]= precio[1]* cantidad[1];
final[2]= precio[2]* cantidad[2];
cout <<"producto"<<"\t" <<"precio"<<"\t"<<"cantidad"<<"\t"<<"final",
cout<<producto[0]<<"\t"<<precio[0]<<"\t"<<cantidad[0]<<"\t"<<final[0];
cout<<producto[1]<<"\t"<<precio[1]<<"\t"<<cantidad[1]<<"\t"<<final[1];
cout<<producto[2]<<"\t"<<precio[2]<<"\t"<<cantidad[2]<<"\t"<<final[2];
return(0);
}

