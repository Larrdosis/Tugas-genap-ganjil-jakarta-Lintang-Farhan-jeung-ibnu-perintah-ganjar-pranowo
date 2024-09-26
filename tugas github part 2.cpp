#include <iostream>
using namespace std;

int main () {
	int n, i, jumlah = 0;
	n = 0;
	
	cout << "Masukan banyak nilai :  ";
	cin >> i ;
	jumlah = jumlah+i;
	
	// perulangan //
	
	if (i%2 == 0){
		cout << i << " - " ;
		i = i-2; }
		else {
			cout << i << " - ";
		}
	
	while(i>n){
		if (i%2 == 0){
		cout << i <<" - ";
		jumlah = jumlah-(i);
	}
		i--;
	}

	jumlah = jumlah-(i);
	cout << i << " ";
	cout << " = " << jumlah << endl;
	
	
}

