#include<iostream>
using namespace std;

class Uczen {
public:
	string imie;
	string nazwisko;
	string klasa;
	int rok_ur;

	ustawImie(string Uczenimie) {
		imie = Uczenimie;
	};

	ustawNazwisko(string Uczennazwisko) {
		nazwisko = Uczennazwisko;
	};

	ustawKlase(string Uczenklasa) {
		klasa = Uczenklasa;
	};

	ustawRokUr(int Uczenrok) {
		rok_ur = Uczenrok;
	};

	int mlodszy(int rok1, int rok2) {
		if (rok1 < rok2)
		{
			return rok1;
		}
		else return rok2;
	};
};

class main() {
	Uczen uczen_a = new Uczen();

	Uczen uczen_b = new Uczen();

	uczen_a.rok_ur = 2003;

	uczen_b.rok_ur = 2004

		int starszyUczen = mlodszy(uczen_a.rok_ur, uczen_b.rok_ur);
}a