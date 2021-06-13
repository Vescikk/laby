#include <iostream>
using namespace std;


class GrupaZaawansowana {
public: int ocena;
	  GrupaZaawansowana() {
		  ocena = 0;
	  };

	  ~GrupaZaawansowana() {
		  cout << "Koniec istnienia klasy";
	  }

	friend void  inkrementujOcene(int );
	friend void  ustawOceneNiedostateczna(GrupaZaawansowana);
	void wypiszOcene() {
		cout << "Ocena: " << ocena << endl;
	};
};
class GrupaPodstawowa {
	int zmienOcene(int ocenaGrupaPodstawowa) {

		return ocenaGrupaPodstawowa;
	}
};

void inkrementujOcene(int ocenaInkrementacja) {

	cout << "Ocena: " << ++ocenaInkrementacja << endl;
};

void ustawOceneNiedostateczna(GrupaZaawansowana grade) {
	grade.ocena = 2;
}

int main() {
	GrupaZaawansowana grupaZawawansowanaSokoly;
	GrupaPodstawowa grupaPodstawowaZoltodzioby;
	grupaZawawansowanaSokoly.wypiszOcene();
grupaZawawansowanaSokoly:inkrementujOcene(5);
	grupaZawawansowanaSokoly.wypiszOcene();
grupaPodstawowaZoltodzioby:ustawOceneNiedostateczna(grupaZawawansowanaSokoly);
	grupaZawawansowanaSokoly.wypiszOcene();
//	grupaPodstawowaZoltodzioby.ocena = 7;
//	cout << grupaPodstawowaZoltodzioby.ocena << endl;
}
