#include <iostream>
#include <ctime>
#include <string>
using namespace std;
//Vo programata ako na site podatoci se pritisne 'q' togash programata ke zatvori

int main () {
    
    char playAgain = 's';
    while (playAgain == 's') {
        // Pechati lokalno vreme i data
        time_t now = time(nullptr);
        tm localTime = *localtime(&now);
        cout << "Pochetok na testot: " << asctime(&localTime);
    
    string ime, prezime;
    int broj_na_indeks;
    cout << "Vnesi gi podatocite za kandidatot: " << endl;
    cout << "Ime: ";
    getline(cin, ime);
    cout << "Prezime: ";
    getline(cin, prezime);
    cout << "Broj na indeks: ";
    cin >> broj_na_indeks;
    
    char izbor; int poeni=0;
    cout<<"Ednostaven test za proverka na znaenja\n";
    cout<< "(odgovaraj so vnesuvanje na soodvetnata bukva pred tochniot odgovor)\n";
    
    cout<<"1.Kolku e dozvoleno alkohol vo krvta na vozach? a. 0.5 promili b.1.0 promili c.1.5 promili\n";
    cin>>izbor; if (izbor=='a') poeni++;
    
    cout<<"2.Koja nauka e prirodna nauka od navedenite? a. Inovacii b. Hemija c. Matematika\n";
    cin>>izbor; if (izbor=='b') poeni++;
    
    cout<<"3.Koja marka na avtomobil ima zadni pogonski trkala? a. Skoda b. Mercedes c. Volkswagen\n";
    cin>>izbor; if (izbor=='b') poeni ++;
    
    cout<<"4.Koja reprezentacija vo fudbal beshe svetski shampion vo 2010? a. Germanija b. Shpanija c.Holandija\n";
    cin>>izbor; if (izbor=='b') poeni++;
    
    cout<<"5.Koj posleden par na hromozomi se kaj mashkite? a. XX b.XY c. YY\n";
    cin>>izbor; if (izbor=='b') poeni++;
    
    cout<<"6.Koga prestigna brojot na zhiteli 8 milijardi vo svetot? a. 2020 b. 2021 c. 2022\n";
    cin>>izbor; if (izbor=='c') poeni++;
    
    cout<<"7.Koj programer/developer chesto gi koristi HTML,CSS,JS? a.Front-end programer b. Back-end programer c.Game developer\n";
    cin>>izbor; if (izbor=='a') poeni++;
    
    cout<<"8.Koja drzhava se naogja vo Afrika? a. Irak b. Tunisija c. Litvanija\n";
    cin>>izbor; if (izbor=='b') poeni++;
    
     cout<<"9.Koj e modelot na skoda od slednite? a. Passat b. GTR c. Superb\n";
    cin>>izbor; if (izbor=='c') poeni++;
    
     cout<<"10.Kolku dolari chini najskapata Bugatti kola? a. 15.3 milioni dolari  b. 10.8 milioni dolari c. 7 milioni dolari\n";
    cin>>izbor; if (izbor=='b') poeni++;
    
     cout<<"11.Kolku e 256/8*44+54-13? a. 1449 b. 1274 c. 1532\n";
    cin>>izbor; if (izbor=='a') poeni++;
    
     cout<<"12.Koj programski jazik ima najobemen materijal? a. Python b. C# c. Java\n";
    cin>>izbor; if (izbor=='c') poeni++;
    
    cout<<"Spored osvoenite poeni Tvoeto znaenje e:\t";
    switch (poeni){
        case 0: case 1: case 2: case 3: case 4: case 5:  cout<< "ocena 5\n"; continue;
    case 6: cout<<"ocena 6\n"; continue;
    case 7: case 8: cout<<"ocena 7\n"; continue;
    case 9: cout<<"ocena 8\n"; continue;
    case 10: case 11: cout<<"ocena 9\n"; continue;
    case 12: cout<<"ocena 10\n"; continue;
    
       // Pechati lokalno vreme i data
        time_t now = time(nullptr);
        tm localTime = *localtime(&now);
        cout << "Pochetok na testot: " << asctime(&localTime);
        
        char choice;

    do {
        cout << "Sleden kandidat? (da=s, ne=q)" << endl;
        cin >> choice;
    } while (choice != 'q');

    cout << "Kraj na polaganjeto" << endl;
    }
    
    return 0;
}
}