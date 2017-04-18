
// fisier sursa - implementare
// bool.cpp

#include "bool.h"
using namespace std;
void citire(char v[][20], int n){
	for (int i=0;i<n;i++){
		cout<<"Sirul "<<i<<": ";
		//cin.get(v[i],20);
		//cin.get();
		cin>>v[i];
	}
}

void cauta(char x[],char v[][20], int n){
	int k=0;
	bool ok=false;
	for (int i=0; i<n; i++)
		if (strcmp(v[i],x)==0){
			ok=true;
			k++;
		}
	if (ok==true){
		cout<<"Sirul a fost gasit!"<<endl;
		cout<<"Nr. aparitii: "<<k<<endl;
	}
	else cout<<"Sirul NU a fost gasit!"<<endl;
}

