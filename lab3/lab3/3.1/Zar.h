#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class CZar{
public:
	CZar(int = 0);
	void Arunca();

	int GetFata() { return m_fata;}

	void Print() { cout<<m_fata<<endl; }
private:
	int m_fata;
};
