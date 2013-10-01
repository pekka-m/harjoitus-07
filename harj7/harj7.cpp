/*********************************************************************
Teht�v�: HARJOITUS 7
Tekij�: Pekka Melgin
PVM: 17.9.2013
Kuvaus:
Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi senttein� > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg
*********************************************************************/
#include <iostream> 
using namespace std; 
int main() 
{ 
	char nimi[20];
	char osoite[50];
	int pituus;
	int paino;

	cout << "Ihannepaino\n\n";
	cout << "Ohjelma laskee ihannepainosi\n";
	cout << "pituutesi perusteella\n\n";
	cout << "Anna nimesi: ";
	cin >> nimi;
	cout << "Anna pituutesti senttein�: ";
	cin >> pituus;
	cout << "Anna osoitteesi: ";
	cin.get();
	cin.get(osoite, 50);
	cout << "Anna painosi kiloina: ";
	cin >> paino;

	cout << "Arvoisa " << nimi << endl;
	cout << "Osoitteesti on " << osoite << endl;
	cout << "Nykyinen painosi on " << paino << " kg" << endl;
	cout << "Ihannepainosi on " << pituus - 100 << " kg" << endl;
	cout << "Erotus " << paino - (pituus - 100) << " kg" << endl;
}