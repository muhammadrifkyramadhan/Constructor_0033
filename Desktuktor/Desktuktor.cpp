#include <iostream>
#include <string>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); // Constructor
	~angka(); // Destruktor
	void cetakData();
	void isiData();
};
// Definisi member Function
angka::angka(int i) { // Construktor
	panjang = i;
	arr = new int(i);
	isiData();
}

angka::~angka() { // Destruktor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = ";
		cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); // Construktor Dipanggil
	angka* ptrBelajarcpp = new angka(5); // Contruktor dipanggil
	delete ptrBelajarcpp; // Destruktor Dipanggil

	return 0;
} // Destruktor Dipanggil