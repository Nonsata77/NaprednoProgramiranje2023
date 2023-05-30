#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, text;

    cout << "Enter filename: ";
    cin >> filename;

    cout << "Enter text: ";
    cin.ignore();
    getline(cin, text);

    ofstream file(filename, ios_base::app);
    if (file.is_open()) {
        file << text << endl;
        file.close();
        cout << "Text has been added to file." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}