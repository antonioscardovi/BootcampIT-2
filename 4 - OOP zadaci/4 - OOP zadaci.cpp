#include "pch.h"
#include <iostream>
#include <vector>
#include <string> 

using namespace std;

//class Banka {
//protected:
//	vector <Racun> racuni;
//public:
//	vector <Racun> get_svi_racuni() {
//		return racuni;
//	}
//
//	void get_neki_racun() {
//		int broj;
//		cout << "Unesite broj racuna: ";
//		cin >> broj;
//		cout << racuni[broj].get_svi_racuni();
//	}
//};

class Racun {
protected:
	int broj_racuna;
	float stanje_racuna;

public:
	Racun();
	Racun(int x);
	void set_broj_racuna(int x);
	void set_stanje_racuna(float x);
	int get_broj_racuna();
	float get_stanje_racuna();
	void polaganje(float iznos);
	void podizanje(float iznos);
};



// Konstruktori
Racun::Racun() {
	cout << "Pocetno stanje: ";
	cin >> stanje_racuna;
}
Racun::Racun(int x) {
	Racun::broj_racuna = x;
}
// Seteri
void Racun::set_broj_racuna(int x) {
	Racun::broj_racuna = x;
}
void Racun::set_stanje_racuna(float x) {
	Racun::stanje_racuna = x;
}
// Geteri
int Racun::get_broj_racuna() {
	return broj_racuna;
}
float Racun::get_stanje_racuna() {
	return stanje_racuna;
}


// Funkcije
void Racun::polaganje(float iznos) {
	set_stanje_racuna(get_stanje_racuna() + iznos);
}
void Racun::podizanje(float iznos) {
	set_stanje_racuna(get_stanje_racuna() - iznos);
}





class Tekuci_racun : public Racun {
private:
	float mj_kamata;
	int br_mjeseci;

public:
	Tekuci_racun();
	Tekuci_racun(int mj);
	void tekuci(int x);
};

Tekuci_racun::Tekuci_racun() {
	cout << "Mjesecna kamata je 0.05%" << endl;
}
Tekuci_racun::Tekuci_racun(int mj) {

}

void Tekuci_racun::tekuci(int x) {

}


class Stedni_racun : public Racun {
private:
	float god_kamata;
public:
	Stedni_racun();
};

Stedni_racun::Stedni_racun() {
	cout << "Godisnja kamata je 5%" << endl;
}




int main()
{
	vector <Racun> racuni;
	int b;
	float stanje;
	char izbor;
	do {
		Racun r;
		cout << "Unesite broj racuna: ";
		cin >> b;
		r.set_broj_racuna(b);
		racuni.push_back(r);
		cout << "Unesite svoj izbor (d/n): ";
		cin >> izbor;
	} while (izbor == 'd');
	
	for (int i = 0; i < racuni.size(); i++) {
		cout << "Na racunu " << racuni[i].get_broj_racuna() << " ima " << racuni[i].get_stanje_racuna() << " kn." << endl;
	}


	/*int x = 1;
	int polog;
	int isplata;

	do {
		system("cls");
		cout << "1 - Stanje racuna." << endl;
		cout << "2 - Polaganje na racun." << endl;
		cout << "3 - Podizanje sa racuna." << endl;
		cout << "0 - Izlaz." << endl;
		cout << "Unesite broj: ";
		cin >> x;

		switch (x) {
		case 1:
			system("cls");
			cout << "Broj racuna: ";
			cout << racun1.get_broj_racuna() << endl;
			cout << "Stanje racuna: ";
			cout << racun1.get_stanje_racuna() << "kn" << endl;
			system("pause");
			break;
		case 2:
			cout << "Iznos pologa: ";
			cin >> polog;
			racun1.polaganje(polog);
			break;
		case 3:
			cout << "Iznos isplate: ";
			cin >> isplata;
			racun1.podizanje(isplata);
			break;
		case 0:
			break;
		} 
	} while (x != 0);*/
}