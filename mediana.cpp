#include<iostream>
using namespace std;
int a;
int b;
int c;
int main (){
cout<<"ingrese tamaño de lista"<<endl;
cin>>a;
char li[a];
cout<<"ingrese elemento "<<endl;
for (int i=0;a>i;i++){
        cin>>li[i];
        b=i;
while(b>0 && li[b]<li[b-1]){//algoritmo de ordenamiento similar al burbuja aprovechando el for de ingreso de datos
            c = li[b];               //mientras el pivote sea menor que el numero en la posicion anterior se intercambia con este ultimo
            li[b]=li[b-1];
            li[b-1]=c;
            b--;}
if (a%2 == 0){//la mediana tiene dos posibilidades pues si la cantidad de elementos es impar sera el elemento en la mitad de la lista ordenada
        cout << "Mediana" << float(li[a/2]+li[(a/2)-1])/2;// caso contrario sera el promedio entre los dos elementos mas cercanos al centro
    }
    else{
        cout << "Mediana" << li[(a-1)/2];
}}}
