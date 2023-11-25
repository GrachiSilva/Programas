#include<iostream>
using namespace std;
int sumatoria(){
int arr[6];
int sumatoria = 0;
for(int j=0;j<6;j++){
cout<< "escribe el valor"<<(j+1)<<":";
cin>>arr[j];
}
for(int j:arr) sumatoria +=j;
return sumatoria;
}
int main(){
cout<<"vamos a empezar con la suma de arreglo:\s";
int b1=sumatoria();
cout<<"la sumatoria es de:"<<b1<<endl;
return 0;
}
