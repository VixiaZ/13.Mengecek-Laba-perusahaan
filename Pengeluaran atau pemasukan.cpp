#include <iostream>
using namespace std;

int main ()

	{
		int a,b;
		
		cout <<"---Program Perbandingan pengeluaran dan peasukan by @ZUlfikar---"<<endl;
		
		cout <<"\nMasukan Jumlah Pemasukan = ";
		cin >>a;
		
		cout <<"\nMasukan Jumlah Pengeluaran = ";
		cin >>b;
		
		// script + rumus menghitung selisih jumlah pengeluaran dan pemsaukan
		
		if (a > b)
		{
			cout << "Pemasukan anda lebih besar dari pada pengeluaran anda dengan selisih "<<a - b;
		}
		if (b > a)
		{
			cout<< "Pengeluaran anda lebih besar dari pada pemasukan anda dengan selisih "<<b - a;
		}
		
		return 0;
	}
