#include <iostream>
#include <cstring>

using namespace std;

class Song {
    const char* str;
    const char* artist;
    const char* ptr;

    public:
        Song(const char* s, const char* a) {
            str = s;
            artist = a;
            ptr = str;
        }

        void printOriginal() {
            cout << "Imeto na pesnata: " << str << endl;
            cout << "Prviot karakter: " << *ptr << endl;
            cout << "Andresa na prviot karakter: " << (void*)ptr << endl;
        }

        void printArtistName() {
            int offset = artist - str;
            ptr += offset;
            cout << "Imeto na artistot: " << ptr << endl;
            cout << "Prviot karakter: " << *ptr << endl;
            cout << "Adresa na prviot karakter: " << (void*)ptr << endl;
        }
};

int main() {
    Song s("Hold my hand", "Michael Jackson");
    s.printOriginal();
    s.printArtistName();
    return 0;
}