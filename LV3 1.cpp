//Matej Jambrošić
//Ulazni parametar je poruka tipa string
//Izlazni parametar je bool
using namespace std;
#include <iostream>
#include <string>
bool prihvatljivaPoruka(string poruka)
{
	if (poruka.empty() == false && poruka.find("#") == string::npos && poruka.length() <= 40)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	string poruka1 = "Ovo je prihvatljiva poruka.";
	string poruka2 = "Ovo je neprihvatljiva poruka jer sadrži # znak.";
	string poruka3 = "Ovo je neprihvatljiva poruka jer je predugačka i prelazi 40 znakova.";
	string poruka4 = "";
	cout << "Poruka 1: " << prihvatljivaPoruka(poruka1) << endl;
	cout << "Poruka 2: " << prihvatljivaPoruka(poruka2) << endl;
	cout << "Poruka 3: " << prihvatljivaPoruka(poruka3) << endl;
	cout << "Poruka 4: " << prihvatljivaPoruka(poruka4) << endl;
	return 0;

}