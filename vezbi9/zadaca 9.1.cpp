#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string sentence;
    cout << "Vnesete edna recenica: ";
    getline(cin, sentence);

    int num_upper = 0;
    int num_lower = 0;
    int num_digits = 0;
    int num_special = 0;

    for (char c : sentence) {
        if (isupper(c)) {
            num_upper++;
        } else if (islower(c)) {
            num_lower++;
        } else if (isdigit(c)) {
            num_digits++;
        } else if (!isspace(c)) {
            num_special++;
        }
    }

    int num_chars = sentence.size();

    cout << "Broj na golemi bukvi: " << num_upper << endl;
    cout << "Broj na mali bukvi: " << num_lower << endl;
    cout << "Broj na cifri: " << num_digits << endl;
    cout << "Broj na specijalni znaci: " << num_special << endl;
    cout << "Broj na karakteri: " << num_chars << endl;

    return 0;
}