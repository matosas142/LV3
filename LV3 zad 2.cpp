//Matej Jambrošič 
// Ulazni parametri funkcije valjanoMjerenje su:
// - temperatura (double)
// - jedinica (char)
// - potvrdeno (bool)
//Izlazni parametri funkcije valjanoMjerenje su:
// - true ako je mjerenje valjano, false ako nije
#include <iostream>
using namespace std;
bool valjanoMjerenje(double temperatura, char jedinica, bool potvrdeno) {
    if (!potvrdeno) return false;
    if (jedinica == 'C') {
        return temperatura >= -40.0 && temperatura <= 85.0;
    }
    else if (jedinica == 'F') {
        return temperatura >= -40.0 && temperatura <= 185.0;
    }
    else {
        return false;
    }
}

void ispisi(bool v) {
    cout << (v ? "KORISTI" : "ODBACI") << '\n';
}

int main() {
    ispisi(valjanoMjerenje(22.5, 'C', true));   // KORISTI
    ispisi(valjanoMjerenje(90.0, 'C', true));   // ODBACI
    ispisi(valjanoMjerenje(100.0, 'F', true));  // KORISTI
    ispisi(valjanoMjerenje(20.0, 'C', false));  // ODBACI
    ispisi(valjanoMjerenje(20.0, 'K', true));   // ODBACI

    // Vlastiti test (provjera granice): gornja granica u °C
    ispisi(valjanoMjerenje(85.0, 'C', true));   // KORISTI
    return 0;
}