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


}