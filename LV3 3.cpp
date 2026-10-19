//Matej Jambrošić
//Ulazni parametri funkicje kandidatDNA su string dna koji predstavlja DNA sekvencu.
//povratna vrijednost funkcije je bool koji označava da li je DNA sekvenca kandidat ili ne.
#include <iostream>
#include <string>

using namespace std;

bool kandidatDNA(string dna) {
	int n = (int)dna.size();
	if (n < 6 || n > 30) return false;
	int gc = 0;
	for (char c : dna) {
		if (c == 'G' || c == 'C') ++gc;
		else if (c == 'A' || c == 'T') {
		} else {
			return false; 
		}
	}
	return gc * 2 >= n;
}

int main() {
	
	const string tests[] = {
		"ACGTGC",
		"AAAAAA",
		"ACGTXC",
		"GCGCGC",
		"ACGT",
		"AAGCGTATGC",
		"GGGAAA"
	};

	for (const string &s : tests) {
		cout << s << " -> " << (kandidatDNA(s) ? "DA" : "NE") << '\n';
	}
	return 0;
}
