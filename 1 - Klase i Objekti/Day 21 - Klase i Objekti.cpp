#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Kutija {
public:
	int x;
	void ispis();
};

void Kutija::ispis() {
	cout << x << endl;
}

class Covjek {
public:
	string ime;
	string prezime;
	int godine;

	void name();
	void age();
	void run(int x);
};


void Covjek::name() {
	cout << "Moje ime je " << ime << " " << prezime << endl;
}
void Covjek::age() {
	cout << "Imam " << godine << " godina." << endl;
}
void Covjek::run(int x) {
	cout << "Koliko metara da trcim?" << endl;
	cin >> x;
	cout << "Trcim " << x << " metara." << endl;
}


class Kocka {
private:
	int visina;
	int sirina;
	int dubina;

public:
	Kocka();
	void set_visina(int x);
	void set_sirina(int x);
	void set_dubina(int x);
	int get_visina();
	int get_sirina();
	int get_dubina();
	void otvori();
	void zatvori();
	Kocka(int x, int y, int z);
	~Kocka();
};

Kocka::Kocka() {
	cout << "Kocka je stvorena." << endl;
}
Kocka::~Kocka() {
	cout << "Kocka je izbrisana." << endl;
}

Kocka::Kocka(int x, int y, int z) {
	cout << "Stvorena je kocka dimenzija: " << endl;
	set_visina(x);
	set_sirina(y);
	set_dubina(z);
	cout << "Visina: " << get_visina() << endl;
	cout << "Sirina: " << get_sirina() << endl;
	cout << "Dubina: " << get_dubina() << endl;
}

void Kocka::set_visina(int x) {
	Kocka::visina = x;
}
void Kocka::set_sirina(int x) {
	Kocka::sirina = x;
}
void Kocka::set_dubina(int x) {
	Kocka::dubina = x;
}

int Kocka::get_visina() {
	return visina;
}
int Kocka::get_sirina() {
	return sirina;
}
int Kocka::get_dubina() {
	return dubina;
}

void Kocka::otvori() {
	cout << "Otvoreno" << endl;
}
void Kocka::zatvori() {
	cout << "Zatvoreno" << endl;
}


class Automobil {
private:
	string marka;
	string model;
	int broj_sasije;

public:
	void set_marka(string x);
	void set_model(string x);
	void set_broj_sasije(int x);
	string get_marka();
	string get_model();
	int get_broj_sasije();
	void upali(Automobil x);
	void ugasi(Automobil x);
	void ubrzaj(Automobil x);
	void uspori(Automobil x);
};


void Automobil::set_marka(string x) {
	Automobil::marka = x;
}
void Automobil::set_model(string x) {
	Automobil::model = x;
}
void Automobil::set_broj_sasije(int x) {
	Automobil::broj_sasije = x;
}
string Automobil::get_marka() {
	return marka;
}
string Automobil::get_model() {
	return model;
}
int Automobil::get_broj_sasije() {
	return broj_sasije;
}

void Automobil::upali(Automobil x) {
	cout << x.get_marka() << " " << x.get_model() << " se upalio." << endl;
}
void Automobil::ugasi(Automobil x) {
	cout << x.get_marka() << " " << x.get_model() << " se ugasio." << endl;
}
void Automobil::ubrzaj(Automobil x) {
	cout << x.get_marka() << " " << x.get_model() << " ubrzava." << endl;
}
void Automobil::uspori(Automobil x) {
	cout << x.get_marka() << " " << x.get_model() << " je usporio." << endl;
}




class StaticKutija {
public:
	static int broj_kutija;

	StaticKutija();
	static void koliko_kutija();
};

StaticKutija::StaticKutija() {
	broj_kutija++;
}

void StaticKutija::koliko_kutija() {
	cout << "Imamo " << broj_kutija << " kutija" << endl;
}

int StaticKutija::broj_kutija = 0;

int main()
{
	cout << "KUTIJA:" << endl;
	Kutija box;
	box.x = 100;
	box.ispis();
	cout << endl;

	/*
	cout << "COVJEK:" << endl;
	Covjek subjekt1;
	subjekt1.ime = "Artas";
	subjekt1.prezime = "Peric";
	subjekt1.godine = 25;
	subjekt1.name();
	subjekt1.age();
	subjekt1.run(0);
	cout << endl;
	*/

	/*
	cout << "KOCKA1:" << endl;
	Kocka kocka1;
	kocka1.otvori();
	kocka1.set_visina(25);
	cout << kocka1.get_visina() << endl;
	kocka1.set_sirina(20);
	cout << kocka1.get_sirina() << endl;
	kocka1.set_dubina(30);
	cout << kocka1.get_dubina() << endl;
	kocka1.zatvori();
	cout << endl;

	cout << "KOCKA2:" << endl;
	Kocka kocka2;
	kocka2.otvori();
	kocka2.set_visina(259);
	cout << kocka2.get_visina() << endl;
	kocka2.set_sirina(63);
	cout << kocka2.get_sirina() << endl;
	kocka2.set_dubina(21);
	cout << kocka2.get_dubina() << endl;
	kocka2.zatvori();
	cout << endl;
	*/

	cout << "KOCKA3:" << endl;
	Kocka kocka3;
	kocka3.otvori();
	kocka3.set_visina(69);
	cout << kocka3.get_visina() << endl;
	kocka3.set_sirina(12);
	cout <<kocka3.get_sirina() << endl;
	kocka3.set_dubina(129);
	cout << kocka3.get_dubina() << endl;
	kocka3.zatvori();
	cout << endl;

	Kocka(15, 25, 10);
	cout << endl;
	

	cout << "AUTOMOBIL1: " << endl;
	Automobil auto1;
	auto1.set_marka("Audi");
	auto1.set_model("RS3");
	auto1.set_broj_sasije(8534923123);
	auto1.upali(auto1);
	auto1.ugasi(auto1);
	auto1.ubrzaj(auto1);
	auto1.uspori(auto1);
	cout << endl;

	cout << "AUTOMOBIL2: " << endl;
	Automobil auto2;
	auto2.set_marka("Zastava");
	auto2.set_model("145");
	auto2.set_broj_sasije(8534923123);
	auto2.upali(auto2);
	auto2.ugasi(auto2);
	auto2.ubrzaj(auto2);
	auto2.uspori(auto2);
	cout << endl;

	cout << "AUTOMOBIL3: " << endl;
	Automobil auto3;
	auto3.set_marka("VW");
	auto3.set_model("Golf");
	auto3.set_broj_sasije(8534923123);
	auto3.upali(auto3);
	auto3.ugasi(auto3);
	auto3.ubrzaj(auto3);
	auto3.uspori(auto3);
	cout << endl;


	cout << StaticKutija::broj_kutija << endl;
	StaticKutija box1;
	StaticKutija box2;
	cout << StaticKutija::broj_kutija << endl;

	StaticKutija box3;
	StaticKutija::koliko_kutija();
}