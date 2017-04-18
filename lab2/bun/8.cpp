#include <iostream>

using namespace std;

int n;

void Add(int v1[] = 0, int v2[] = 0, int v3[] = 0, int v4[] = 0 )
{
	for (int i=0; i<=n-1; i++) // parcurgere elemente

		if(v4 && v3 && v2 && v1) // toti cei 4 vectori exista
				cout <<v1[i]+v2[i]+v3[i]+v4[i]<<" ";

			else if(v3 && v2 && v1) // 3 vectori
					cout<<v1[i]+v2[i]+v3[i]<<" ";

				else if(v2 && v1) // 2 vectori
						cout<<v1[i]+v2[i]<<" ";
}

void test()
{

	n=4; // nr elemente
	int v1[4] = {1,2,3,4};
	int v2[4] = {1,2,3,4};
	int v3[4] = {1,2,3,4};
	int v4[4] = {1,2,3,4};

	cout<<"\n Suma a doi vectori :";
	Add(v1, v2);

	cout<<"\n Suma a trei vectori :";
	Add(v1, v2, v3);

	cout<<"\n Suma a patru vectori :";
	Add(v1, v2, v3, v4);
	cout<<endl;
}

int main ()
{
	test();
	return 0;
}
