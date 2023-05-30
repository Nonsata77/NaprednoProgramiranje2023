#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//Overload operator - go promenuva nachinot na rabota na operatorot spored tipot na podatocite.
//Friend operator - poseben vid na overload operator, koj ima pristap do privatni chlenovi na klasata.

using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date() {}
    friend void operator>>(istream& in, Date& d); // Overloading >> operator
    friend void operator<<(ostream& out, Date& d); // Overloading << operator
    ~Date() {}
};

void operator>>(istream& in, Date& d) {
    cout << "\nEnter Day: ";
    in >> d.day;
    cout << "\nEnter Month: ";
    in >> d.month;
    cout << "\nEnter Year: ";
    in >> d.year;
    cout << "\n------------------";
    switch(d.month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            if(d.day > 31) {
                cout << "\nInvalid Days ";
                exit(0);
            }
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            if(d.day > 30) {
                cout << "\nInvalid Days ";
                exit(0);
            }
            break;
        case 2: // February
            // Se proveruva dali godinata e prestapna.
            if((d.year % 100 != 0 && d.year % 4 == 0) || (d.year % 400 == 0)) {
                if(d.day > 29) {
                    cout << "\nInvalid Days ";
                    exit(0);
                }
            } else {
                if(d.day > 28) {
                    cout << "\nInvalid Days ";
                    exit(0);
                }
            }
            break;
        default:
            cout << "\nInvalid Month ";
            exit(0);
    }
}

void operator<<(ostream& out, Date& d) {
    out << "\nDate: " << d.day << "/" << d.month << "/" << d.year << endl;
}

int main() {
    Date d;
    cout << "\nEnter Date: \n";
    cout << "\n------------------";
    cin >> d;
    cout << d;
    return 0;
}