#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // Melemparkan sebuah integer maka
		cout << "Pertanyaan tidak akan di eksekusi" << endl;
	}
}