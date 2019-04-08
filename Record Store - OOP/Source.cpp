#include "pch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Album {
private:
	int ID;
	string artist;
	string title;
	int year;
	string genre;
	string format;
	float price;

public:
	// Constructors
	Album() {
		cout << "Novi album";
	}
	Album(int id, string artist, string title, int year, string genre, string format) {
		this-> ID = id;
		this->artist = artist;
		this->title = title;
		this->year = year;
		this->genre = genre;
		this->format = format;
	}
	// Set functions
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
	void set_price(float x) {
		price = x;
	}
	// Get functions
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
	float get_price() {
		return price;
	}
};


class Admin {
private:
	struct login {
		string username;
		string password;
	};

public:
	Admin() {
		string u, p;
		login l;
		cout << "Username: ";
		cin >> l.username;
		cout << "Password: ";
		cin >> l.password;
		ifstream input;
		while (input) {
			getline(input, u);
			getline(input, p);
		}
		input.close();
		if (l.username == u && l.password == p) {
			cout << "Welcome!" << endl;
			cout << "Admin: " << l.username;
		}
		else {
			return;
		}
	}
	void new_album() {
		vector <Album> a;

		cout << "Artist: ";
		
	}
};



int main() {

}