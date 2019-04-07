#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Record_store {
protected:
	

};

class Album {
private:
	string artist;
	string title;
	int year;
	string genre;
	string format;

public:
	Album();
	void set_artist(string x);
	void set_title(string x);
	void set_year(int x);
	void set_genre(string x);
	void set_format(string x);
	string get_artist();
	string get_title();
	int get_year();
	string get_genre();
	string get_format();
};

//KONSTRUKTORI
Album::Album() {
	cout << "Novi album" << endl;
}


// SETERI
void Album::set_artist(string x) {
	Album::artist = x;
}
void Album::set_title(string x) {
	Album::title = x;
}
void Album::set_year(int x) {
	Album::year = x;
}
void Album::set_genre(string x) {
	Album::genre = x;
}
void Album::set_format(string x) {
	Album::format = x;
}
//GETERI
string Album::get_artist() {
	return artist;
}
string Album::get_title() {
	return title;
}
int Album::get_year() {
	return year;
}
string Album::get_genre() {
	return genre;
}
string Album::get_format() {
	return format;
}

int main()
{
	vector <Album> albumi;
	string artist, title, genre, format;
	string new_album;
	int year;
	char choice;
	int menu;

	ifstream input("albums.txt");

	while (input) {
		Album a;
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
		albumi.push_back(a);
	}

	input.close();
	system("cls");

	do {
		cout << "\n\t\tRECORD STORE\n\n" << endl;
		cout << "MENU" << endl;
		cout << "1) Add New Album" << endl;
		cout << "2) Album List" << endl;
		cout << "0) Exit" << endl;
		cout << "Enter number: ";
		
		cin >> menu;
		cin.ignore();
	


	switch (menu) {
	case 1:
	/*	do {*/
			system("cls");
			Album a;
			cout << "Album artist: ";
			getline(cin, artist);
			a.set_artist(artist);
			cout << "Album title: ";
			getline(cin, title);
			a.set_title(title);
			cout << "Album year of release: ";
			cin >> year;
			a.set_year(year);
			cin.ignore();
			cout << "Album genre: ";
			getline(cin, genre);
			a.set_genre(genre);
			cout << "Album format: ";
			getline(cin, format);
			a.set_format(format);

			albumi.push_back(a);

			new_album = artist + "\n" + title + "\n" + to_string(year) + "\n" + genre + "\n" + format + "\n" + "-" + "\n";

			ofstream output;
			output.open("albums.txt", ios::out | ios::app);
			output << new_album;
			output.close();

			/*cout << "Add more albums? (y/n): ";
			cin >> choice;
			cin.ignore();
		} while (choice == 'y');*/
		break;
	case 2:
		system("cls");
		for (int i = 0; i < albumi.size(); i++) {
			cout << "Album #" << i + 1 << "\n" << "Artist: " << albumi[i].get_artist() << "\n"
				<< "Title: " << albumi[i].get_title() << "\n" << "Year: " << albumi[i].get_year()
				<< "\n" << "Genre: " << albumi[i].get_genre() << endl;
			cout << "\n";
		}
		break;

	}
	} while (menu != 0);
}