#include <fstream>
//untuk membuat, menulis dan membaca input output
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namaFile;

	cout << "Masukkan Nama File : ";
	cin >> namaFile;
	
	//Membuka file dalam mode menulis
	ofstream outfile;
	//Menunjuk ke sebuah nama file
	outfile.open(namaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		// menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;

	// menunjuk ke sebuah file
	infile.open(namaFile, ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;

	//jika file ada maka
	if (infile.is_open())
	{
		// melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// dan tampilkan disini
			cout << baris << '\n';
		}
		// tutup file tersebut setelah selesai
		infile.close();
	}

	// jika tidak ditemukan file maka menampilkan ini
	else cout << "Unable to open file";
	return 0; 
}