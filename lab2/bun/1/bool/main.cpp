
// fisier sursa - main
// main.cpp

#include "bool.h"
using namespace std;

int main(){

	char a[30][20];
	char s[20];
	int dim;

	cout<<"Cautare cuvant intr-o lista de cuvinte"<<endl;
	cout<<endl;
	cout<<"Nr. cuvinte: ";
	cin>>dim;
	citire(a,dim);
	cout<<"Cuvant cautat: ";
	//cin.get(s,20);
	//cin.get();
	cin>>s;
	cauta(s,a,dim);


	cin.get();
	cin.get();


}