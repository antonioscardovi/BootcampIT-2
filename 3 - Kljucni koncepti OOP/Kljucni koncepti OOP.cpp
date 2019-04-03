#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

class Televizija {
private:
	// skiriveni podatak
	bool ukljucena;
public:
	// konstruktor
	Televizija() {
		ukljucena = false;
	}
	// suèelje (gumb za paljenje)
	void power() {
		if (ukljucena == true) {
			ukljucena = false;
		}
		else {
			ukljucena = true;
		}
	}

	void status() {
		if (ukljucena == true) {
			cout << "TV radi!" << endl;
		}
		else {
			cout << "TV ne radi!" << endl;
		}
	}
};


class Ak47 {
private:
	bool loaded;
	bool firing;
	bool jammed;
	int bullet_count;
public:
	Ak47() {
		loaded = false;
		bullet_count = 0;
	}

	void reload() {
		if (bullet_count == 0) {
			loaded = false;
		}
		else {
			bullet_count = 30;
			loaded = true;
		}
	}

	void fire() {
		if (firing == false && loaded == true && jammed == false) {
			firing = true;
			srand(time(NULL));
			int jam_chance = rand() % 30;
			if (jam_chance == 5) {
				jammed = true;
			}
			while (firing == true && jammed == false) {
				bullet_count--;
			}
		}
		else {
			firing = false;
		}
	}

	void jam() {
		if (jammed == false) {
			fire();
		}
		else {
			cout << "Cleaning the AK." << endl;
			jammed == false;
		}
	}

	


	
};

int main()
{
    
}
