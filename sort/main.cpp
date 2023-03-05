#include<bits/stdc++.h>
using namespace std;

void printAngka(int angka[]) {
	for(int i = 0; i < 3; i++) {
		cout << angka[i] << " ";
	}
}

void sortAscending(int angka[]) {
	// 4 2 8
	// 2 4 8
	// 2 4 8
	for(int i = 0; i < 3; i++) {
		for(int j = i+1; j < 3; j++) {
			// 4        >  2
			if(angka[i] > angka[j]) {
				// 4
				int temp = angka[i];
				// 2
				angka[i] = angka[j];
				// 4
				angka[j] = temp;
			}
		}
	}
	printAngka(angka);
}

void sortDescending(int angka[]) {
	for(int i = 0; i < 3; i++) {
		for(int j = i+1; j < 3; j++) {
			if(angka[i] < angka[j]) {
				int temp = angka[i];
				angka[i] = angka[j];
				angka[j] = temp;
			}
		}
	}
	printAngka(angka);
}

// 8 4 2

int maximum(int angka[]) {
	int max = angka[0];
	
	return max;
}

int minimum(int angka[]) {
	int min = angka[2];
	
	return min;
}

float ratarata(int angka[]) {
	float total;
	for(int i = 0; i < 3; i++) {
		total += angka[i];
		// 0 + 8 = 8
		// 8 + 4 = 12
		// 12 + 2 = 14
	}
	
	return total/3;
}

int main() {
	
	int angka[3];
	
	cout << "Masukkan tiga buah nilai" << endl;
	cout << "Nilai a: ";
	cin >> angka[0];
	cout << "Nilai b: ";
	cin >> angka[1];
	cout << "Nilai c: ";
	cin >> angka[2];
	
	cout << endl;
	cout << "Urutan nilai Ascending: ";
	sortAscending(angka);
	
	cout << endl;
	
	cout << "Urutan nilai Descending: ";
	sortDescending(angka);
	
	cout << endl;
	
	cout << "Nilai MAX: " << maximum(angka) << endl;
	cout << "Nilai MIN: " << minimum(angka) << endl;
	cout << "Nilai RATA-RATA: " << ratarata(angka) << endl;
} 








