#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

const string BrojNaIndeks = "INKI975";
const string Ime = "Antonio";
const string Prezime = "Mitrevski";

int main()
{
    //se vnesuva adresata na studentot
    string adresa;
    cout << "Vnesi ja tvojata adresa: ";
    getline(cin, adresa);

    // se pechati celosno ime, prezime i broj na indeks, povikani od const string
    string celosnoIme = BrojNaIndeks + " " + Ime + " " + Prezime;
    cout << "Celosnoto ime e: " << celosnoIme << endl;

    vector<int> asciiKodovi;
    for (char ch : celosnoIme) {
        asciiKodovi.push_back((int)ch);
    }

    //gi pechati ASCII kodovite od stringot celosnoIme
    cout << "Vektorot so ASCII kodovi na karakterite se: ";
    for (int kod : asciiKodovi) {
        cout << kod << " ";
    }
    cout << endl;

    //gi podreduva ASCII kodovite od najmal do najgolem broj
    sort(asciiKodovi.begin(), asciiKodovi.end());
    cout << "Sortiraniot vektor e: ";
    for (int kod : asciiKodovi) {
        cout << kod << " ";
    }
    cout << endl;

    //se vnesuva datum na ragjanje
    int den, mesec, godina;
    cout << "Vnesi go datumot na ragjanje (vo format DD-MM-YY): ";
    scanf("%d-%d-%d", &den, &mesec, &godina);

    vector<int> cifri;
    while (den > 0) {
        cifri.push_back(den % 10);
        den /= 10;
    }
    while (mesec > 0) {
        cifri.push_back(mesec % 10);
        mesec /= 10;
    }
    while (godina > 0) {
        cifri.push_back(godina % 10);
        godina /= 10;
    } 

//se smestuva vo kreiranata datoteka
    ofstream outFile;
    string filename = BrojNaIndeks + ".Proekt";
    outFile.open(filename);
    if (outFile.is_open()) {
        for (int kod : asciiKodovi) {
            outFile << kod << " ";
        }
        for (int cifra : cifri) {
            outFile << cifra << " ";
        }
        outFile.close();
        cout << "Vektorot e zachuvan vo datoteka: " << filename << endl;
    }
    else {
        cout << "Neuspeshno otvoranje na datotekata!" << endl;
    }

    return 0;
}