#include "zar.h"

CZar::CZar(int _fata)
{
	m_fata = _fata;
}

void CZar::Arunca()
{
	m_fata = rand()%6 + 1;
}