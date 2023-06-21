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
}