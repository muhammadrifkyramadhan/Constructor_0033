#include<iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; //chain function
	}
	string getjudul()
	{
		return this->judul;
	}

} bukunya;

int main()
{
	// bukunya.setjudul("Matematika");
	//cout << bukunya.getjudul();
	cout << bukunya.setJudul("Matematika").getjudul(); // chainfunction
	return 0;
}