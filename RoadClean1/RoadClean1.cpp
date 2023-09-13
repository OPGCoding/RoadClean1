#include <iostream>

using namespace std;

int main()
{
    label:
    // Variabler
    double RabatSkrab;
    double RabatKlip;
    double PrisKlip = 50.00/100.00;
    double SkrabPris = 100.00/100.00;
    double Meter;
    double StartPris = 750.00;


    string Type;
    // Definerer om det er Klip eller Skrab
    cout << "Brug: \n 1) Klip \n 2) Skrab \n";
    cin >> Type;

    if (Type == "Klip" || Type == "1") {
        // Definerer antal meter
        cout << "Skriv antal meter (1 = 1m): ";
        cin >> Meter;

        // Udregning - Rabat prisen til klipning 
        RabatKlip = PrisKlip*Meter+StartPris;
       
        // Output
        cout << "Rabat klipning " << RabatKlip << ",- \n \n";
    }
    else if (Type == "Skrab" || Type == "2") {
        // Definerer antal meter
        cout << "Skriv antal meter (1 = 1m): ";
        cin >> Meter;

        // Udregning - Rabat prisen til Skrabning
        RabatSkrab = (SkrabPris * Meter) + StartPris;

        cout << "Rabat skrabning " << RabatSkrab << ",- \n \n";
    }

    goto label;
}

//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
