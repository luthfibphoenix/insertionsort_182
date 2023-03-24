#include <iostream>
using namespace std;

int arr[20];		//membuat array dengan panajang data 20
int n;				//membuat variabel inputan n

void input() {		//procedure input
	while (true)	
	{
		cout << "Masukkan Jumlah Data pada Array : ";	//membuat inputan jumlah elemen array
		cin >> n;										//memanggil variabel inputan n

		if (n <= 20) {									//membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; //menampilkan pesan jika data lebih dari 20
		}
	}
}