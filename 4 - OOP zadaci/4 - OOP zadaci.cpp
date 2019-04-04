#include "pch.h"
#include <iostream>

using namespace std;

class Racun {
protected:
	static int broj_racuna;
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


int Racun::broj_racuna = 0;

// Konstruktori
Racun::Racun() {
	broj_racuna++;
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
	Racun racun1(12);
	int x = 1;
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
	} while (x != 0);
}