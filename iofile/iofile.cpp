#include <fstream>
// untuk membuat, menulis dan membaca input output
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis
	ofstream outfile;

	cout << ">= Menulis file, \'q' untuk keluar" << endl;

	// unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
	}
}