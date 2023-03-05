#include<iostream>
using namespace std;

class Hotel {
	public:
	void displayMenu() {
		cout << "Program menginap di hotel" << endl;
		cout << "Days         | Superior      | Deluxe        | Premium       " << endl;
		cout << "-------------+---------------+---------------+---------------" << endl;
		cout << "1-2 Hari     | 100.000/night | 150.000/night | 200.000/night " << endl;
		cout << "3-4 Hari     | 90.000/night  | 135.000/night | 180.000/night " << endl;
		cout << ">= 5 Hari    | 80.000/night  | 120.000/night | 160.000/night " << endl;
		cout << "-------------+---------------+---------------+---------------" << endl;
		cout << "Tipe kamar" << endl;
		cout << "1. Superior" << endl;
		cout << "2. Deluxe" << endl;
		cout << "3. Premium" << endl;
	}
	
	int transaksi(int tipeKamar, int lamaMenginap) {
		int total;
		if(tipeKamar == 1) {
			if(lamaMenginap == 1 || lamaMenginap == 2 ) {
				total = lamaMenginap * 100000;
			}else if(lamaMenginap == 3 || lamaMenginap == 4 ) {
				total = lamaMenginap * 90000;
			}else if(lamaMenginap >= 5 ) {
				total = lamaMenginap * 80000;
			}
		}else if(tipeKamar == 2) {
			if(lamaMenginap == 1 || lamaMenginap == 2 ) {
				total = lamaMenginap * 150000;
			}else if(lamaMenginap == 3 || lamaMenginap == 4 ) {
				total = lamaMenginap * 135000;
			}else if(lamaMenginap >= 5 ) {
				total = lamaMenginap * 120000;
			}
		}else if(tipeKamar == 3) {
			if(lamaMenginap == 1 || lamaMenginap == 2 ) {
				total = lamaMenginap * 200000;
			}else if(lamaMenginap == 3 || lamaMenginap == 4 ) {
				total = lamaMenginap * 180000;
			}else if(lamaMenginap >= 5 ) {
				total = lamaMenginap * 160000;
			}
		}
	}
	
	void struk(string nama, int tipeKamar, int lamaMenginap, int total) {
		string tipeKamartxt;
		
		if(tipeKamar == 1) {
			tipeKamartxt = "Superior";
		}else if(tipeKamar == 2) {
			tipeKamartxt = "Deluxe";
		}else if(tipeKamar == 3) {
			tipeKamartxt = "Premium";
		}
		
		cout << "==========================================" << endl;
		cout << "               STRUK TRANSAKSI            " << endl;
		cout << "==========================================" << endl;
		cout << " Nama customer\t\t: " << nama << "\t\t   " << endl;
		cout << " Tipe kamar\t\t: " << tipeKamartxt << "\t   " << endl;
		cout << " Lama menginap\t\t: " << lamaMenginap << " Hari" << "\t   " << endl;
		cout << " Harga sebelum pajak\t: " << total << "\t   " << endl;
		cout << " Harga setelah pajak\t: " << total + (total * 10/100) << "\t   " << endl;
		cout << "==========================================" << endl;
	}
};

int main() {
	
	int tipeKamar, lamaMenginap, total;
	char ulang;
	string nama;
	
	Hotel myhotel;
	
	do {
		
		system("cls");
		
		myhotel.displayMenu();
		
		cout << "Nama customer: ";
		cin >> nama;
		
		do {
			cout << "Pilih tipe kamar: ";
			cin >> tipeKamar;
		} while(tipeKamar < 1 || tipeKamar > 3);
		
		do {
			cout << "Lama Menginap: ";
			cin >> lamaMenginap;
		} while(lamaMenginap < 1);
		
		total = myhotel.transaksi(tipeKamar, lamaMenginap);
		
		cout << endl;
		
		myhotel.struk(nama, tipeKamar, lamaMenginap, total);
		
		cout << endl;
		cout << "ingin memesan lagi? (y/n): ";
		cin >> ulang;
		
	} while(ulang == 'y' || ulang == 'Y');
	
}
