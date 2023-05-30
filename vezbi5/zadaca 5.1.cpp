#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Antonio";
    string surname = "Mitrevski";

    cout << "Pravilno ime: " << name << endl;
    cout << "Pravilno prezime: " << surname << endl;

    name.replace(0, 4, "%%%%");
    surname.replace(0, 4, "%%%%");

    cout << "Izmenato ime: " << name << endl;
    cout << "Izmenato prezime: " << surname << endl;

    return 0;
}