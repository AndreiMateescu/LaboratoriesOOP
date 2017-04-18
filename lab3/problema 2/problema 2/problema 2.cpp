#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<stdbool.h>
#include<conio.h>


using namespace std;

class ISBNNN{
protected:
	int id_tara;//3
	int id_editura;//3
	int id_titlu;//3
	int cifra;//1

public:
	int getID_tara(){
		return id_tara;
	}
	int getID_editura(){
		return id_editura;
	}
	int getID_titlu(){
		return id_titlu;
	}
	int getCifra(){
		return cifra;
	}

	void set_ID_tara(int id_tara){
		this->id_tara = id_tara;
	}
	void set_ID_editura(int id_editura){
		this->id_editura = id_editura;
	}
	void set_ID_titlu(int id_titlu){
		this->id_titlu = id_titlu;
	}
	void set_cifra(int cifra){
		this->cifra = cifra;
	}

};


class CCarte{

protected:
	char *titlu, *autor, *editura;
	ISBNNN f;
	int an;
	float pret;
	int aux1, aux2, aux3;
	int number = 0;
	int invers = 0;
	int cif;

public:
	CCarte(){
		titlu = new char[20];
		autor = new char[20];
		editura = new char[20];
	}

	~CCarte(){
		delete[] titlu;
		delete[] autor;
		delete[] editura;
	}

	void citire_carte(){
		cout << "Titlu: "; cin >> titlu;
		cout << "Autor: "; cin >> autor;
		cout << "Editura: "; cin >> editura;
		cout << "ISBN ID tara: "; cin >> aux1;
		f.set_ID_tara(aux1);
		cout << "ISBN ID editura: "; cin >> aux2;
		f.set_ID_editura(aux2);
		cout << "ISBN ID titlu: "; cin >> aux3;
		f.set_ID_titlu(aux3);
		while (aux3 != 0){
			number = number * 10 + aux3 % 10;
			aux3 = aux3 / 10;
		}
		while (aux2 != 0){
			number = number * 10 + aux2 % 10;
			aux2 = aux2 / 10;
		}
		while (aux1 != 0){
			number = number * 10 + aux1 % 10;
			aux1 = aux1 / 10;
		}

		while (number != 0){
			invers = invers * 10 + number % 10;
			number = number / 10;
		}
		cif = invers % 11;
		f.set_cifra(cif);
		cout << "An: "; cin >> an;
		cout << "Pret: "; cin >> pret;
		cout << endl;
	}

	void afisare_carte(){
		cout << "Titlu: " << titlu << endl;
		cout << "Autor: " << autor << endl;
		cout << "Editura: " << editura << endl;
		cout << "ISBN ID tara: " << f.getID_tara() << endl;
		cout << "ISBN ID editura: " << f.getID_editura() << endl;
		cout << "ISBN ID titlu: " << f.getID_titlu() << endl;
		cout << "ISBN cifra: " << f.getCifra() << endl;
		cout << "An: " << an << endl;
		cout << "Pret: " << pret << endl;
		cout << endl;
	}

	int cautare_titlu(char *titlu){
		if (strcmp(this->titlu, titlu) == 0)
			return 1;
		else
			return 0;
	}

	int cautare_editura(char *editura){
		if (strcmp(this->editura, editura) == 0)
			return 1;
		else
			return 0;
	}

	int cautare_ISBN(int id_tara, int id_editura, int id_titlu, int cifra){
		if (f.getID_tara() == id_tara && f.getID_editura() == id_editura && f.getID_titlu() == id_titlu && f.getCifra() == cifra)
			return 1;
		else
			return 0;
	}

};

int main()
{
	CCarte *x;

	int n;
	cout << "Cate elemente doriti sa inserati: "; cin >> n;
	x = new CCarte[n + 2];

	int aux;
	int i;
	for (i = 1; i <= n; i++)
		x[i].citire_carte();

	cout << endl << endl;

	for (i = 1; i <= n; i++)
		x[i].afisare_carte();

	int option;
	cout << "1. Cautare dupa nume" << endl << "2. Cautare dupa editura" << endl << "3. Cautare dupa ISBN" << endl;
	cout << "Optiune: "; cin >> option;
	while (option != 0){
		if (option == 1){
			char *aux;
			int y[n + 2];
			for (i = 1; i <= n + 2; i++)
				y[i] = 0;
			aux = new char[20];
			cout << "Titlu: "; cin >> aux;

			for (i = 1; i <= n; i++){
				y[i] = x[i].cautare_titlu(aux);
			}
			int ok = 0;
			for (i = 1; i <= n; i++)
			if (y[i] == 1)
				ok = 1;
			if (ok == 1)
				cout << aux << endl;
			else
				cout << "Nu s-a gasit";
		}

		else
		if (option == 2){
			char *aux;
			int y[n + 2] = { 0 };
			aux = new char[20];
			cout << "Editura: "; cin >> aux;
			for (i = 1; i <= n; i++)
				y[i] = x[i].cautare_editura(aux);

			int ok = 0;
			for (i = 1; i <= n; i++)
			if (y[i] == 1)
				ok = 1;
			if (ok == 1)
				cout << aux << endl;
			else
				cout << "Nu s-a gasit";
		}
		else
		if (option == 3){
			int a, b, c, d;
			int y[n + 2] = { 0 };

			cout << "ID tara: "; cin >> a;
			cout << "ID editura: "; cin >> b;
			cout << "ID titlu: "; cin >> c;
			cout << "ID cifra: "; cin >> d;

			for (i = 1; i <= n; i++)
				y[i] = x[i].cautare_ISBN(a, b, c, d);

			int ok = 0;
			for (i = 1; i <= n; i++)
			if (y[i] == 1)
				ok = 1;

			if (ok == 1){
				cout << "ID tara: " << a;
				cout << "ID editura: " << b;
				cout << "ID titlu: " << c;
				cout << "ID cifra: " << d << endl;
			}
			else
				cout << "Nu s-a gasit";
		}
		cout << endl << "Optiune: "; cin >> option;
	}

	_getche();
	return 0;
}
