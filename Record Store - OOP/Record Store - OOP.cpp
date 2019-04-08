#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Record_store {
protected:
	int album_count;
	vector <Album> albumi;

public:
	void add_album() {
		Album a;
		a.get_ID();
		albumi.push_back(a);
	}

	vector <Album> pretraga() {
		vector <Album> trazeni;
		string input;
		cout << "Enter artist name: ";
		cin >> input;
		for (int i = 0; i < albumi.size(); i++) {
			if (albumi[i].get_title() == input) {
				trazeni.push_back(albumi[i]);
			}
		}
		return trazeni;
	}

	void prikaz_albuma() {
		for (int i = 0; i < albumi.size(); i++) {
			cout << albumi[i].get_title();
		}
	}

	void prikaz_albuma(vector <Album> a) {
		for (int i = 0; i < a.size(); i++) {
			cout << a[i].get_title();
		}
	}

	Record_store() {
		ifstream input("albums.txt");
		while (input) {
			Album temp;
			string title, artist, genre, format, year, znak;
			getline(input, artist);
			getline(input, title);
			getline(input, year);
			getline(input, genre);
			getline(input, format);
			temp.set_artist(artist);
			temp.set_genre(genre);
			temp.set_format(format);
			temp.set_title(title);
			temp.set_year(stoi(year));
			albumi.push_back(temp);
			getline(input, znak);
			if (znak == "-") {
				continue;
			}
			else if (znak == "\n") {
				break;
			}
		}
		input.close();
	}
};


class Album : public Record_store {
private:
	int ID;
	string artist;
	string title;
	int year;
	string genre;
	string format;

public:
	Album() {
		album_count++;
		cout << "Novi album" << endl;
	}
	void set_ID(int x) {
		ID = x;
	}
	void set_artist(string x) {
		artist = x;
	}
	void set_title(string x) {
		title = x;
	}
	void set_year(int x) {
		year = x;
	}
	void set_genre(string x) {
		genre = x;
	}
	void set_format(string x) {
		format = x;
	}
	int get_ID() {
		return ID;
	}
	string get_artist() {
		return artist;
	}
	string get_title() {
		return title;
	}
	int get_year() {
		return year;
	}
	string get_genre() {
		return genre;
	}
	string get_format() {
		return format;
	}
};

class Admin : public Album {
private:
	string username;
	string password;

public:
	Admin() {
		cout << "Welcome!" << endl;
		cout << "Admin: " << username;
	}
	void new_album();
	void modify_album();
};

class Kupac {
private:
	string username;
	string password;

public:
	Kupac() {
		cout << "Welcome!" << endl;
		cout << "User: " << username;
	}
};





int main()
{
	vector <Album> albumi;
	int ID;
	string artist, title, genre, format;
	string junk;
	string new_album;
	int year;
	char choice;
	int menu;

	// FILE INPUT
	ifstream input("albums.txt");
	while (input) {
		Album a;
		input >> ID;
		a.set_ID(ID);
		input.ignore();		
		getline(input, artist);
		a.set_artist(artist);
		getline(input, title);
		a.set_title(title);
		input >> year;
		input.ignore();
		a.set_year(year);
		getline(input, genre);
		a.set_genre(genre);
		getline(input, format);
		a.set_format(format);
		albumi.push_back(a);
	}
	input.close();

	Record_store rec;

	rec.prikaz_albuma();
	rec.prikaz_albuma(rec.pretraga());
		cin >> menu;
		switch (menu) {
		case 1:
			do {
				system("cls");
				Album a;
				cout << "Album ID: ";
				cin >> ID;
				cin.ignore();
				a.set_ID(ID);
				cout << "Album artist: ";
				getline(cin, artist);
				a.set_artist(artist);
				cout << "Album title: ";
				getline(cin, title);
				a.set_title(title);
				cout << "Album year of release: ";
				cin >> year;
				cin.ignore();
				a.set_year(year);			
				cout << "Album genre: ";
				getline(cin, genre);
				a.set_genre(genre);
				cout << "Album format: ";
				getline(cin, format);
				a.set_format(format);
				albumi.push_back(a);

				new_album = ID + "\n" + artist + "\n" + title + "\n" + to_string(year) + "\n" + genre + "\n" + format + "\n";

				ofstream output;
				output.open("albums.txt", ios::out | ios::app);
				output << new_album;
				output.close();

				cout << "Add more albums? (y/n): ";
				cin >> choice;
				cin.ignore();
			} while (choice == 'y');
			break;
		case 2:
			system("cls");
			rec.prikaz_albuma();
			/*for (int i = 0; i < albumi.size(); i++) {
				cout << "Album #" << i + 1 << "\nAlbum ID: " << albumi[i].get_ID() << "\nArtist: " << albumi[i].get_artist()
					<< "\nTitle: " << albumi[i].get_title() << "\nYear: " << albumi[i].get_year()
					<< "\nGenre: " << albumi[i].get_genre() << "\nFormat: " << albumi[i].get_format();
				cout << "\n";
			}*/
			break;
		}
	
}