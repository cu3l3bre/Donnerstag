#include <iostream>
#include <string>

using namespace std;


int main()
{

	cout << "Programm zum Donnerstag in Woche 2" << endl;

	int Jahr = 2019;

	int Zahlen[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double Messwerte[10] = {0.1, 0.4, 0.6, 1.9, 2.0, 3.0, 5.0, 0.3,0.7,0.8};

	string Monate[12] = {
		"Januar","Februar", "Maerz","April",
		"Mai","Juni", "Juli", "August","September",
		"Oktober","November", "Dezember"};


	// Neue Variable, dem der Inhalt "Januar" zugewiesen wird
	string EinMonat = Monate[0];

	// Ausgabe des ertsen Buchstaben also hier "J"
	cout << EinMonat[0] << endl;

	cout << Monate[1] << endl;
	Monate[1] = "Karnevalsmonat :p";
	cout << Monate[1] << endl;


	cout << "Name des letzten Monats: " << Monate[11] << endl;



	// Alle Monate anzeigen

	for (int i = 0; i < 12; i++)
	{
		cout << "Der " << i+1 << ". Monat im Jahr heisst:\t" << Monate[i] << endl;
	}


	
	
	
	system("pause");
	return 0;
}