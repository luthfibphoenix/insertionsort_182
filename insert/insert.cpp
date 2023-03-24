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
	cout << endl;											//membuat jarak per baris program
	cout << "====================" << endl;					//menampilkan tampilan susunan data element array
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)								//menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";				//masukkan atau menginputkan nilai data n
		cin >> arr[i];										//menyimpan nilai data n kedalam array arr
	}
}


void insertionsort() {			//prosedure insertionsort
	
	int temp;					//membuat variabel data temporer atau penyimpanan sementara
	int j;						//membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++) {	//1. looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];				//2. simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;					//3. setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp) //4. looping while dimana nilai j lebih besar sama dengan 0 dan 
										//arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];		//4a. simpan arr[j] ke dalam variabel arr[j+1]
			j--;						//4b. decrement nilai j by 1
		}
		arr[j + 1] = temp;				//5. simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass" << i << ": ";	//output ke layar
		for (int k = 0; k < n; k++) {	//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";		//output ke layar
		}
 	}
}

void dislpay() {			//procedure display
	cout << endl;						//output batis kosong
	cout << "=================================" << endl;	//output ke layar
	cout << "Element Array yang telah tersusun" << endl;	//output ke layar
	cout << "=================================" << endl;	//output ke layar

	for (int j = 0; j < n; j++) {			//looping dengan j dimulai dari 0 hingga n-1		

	}

}