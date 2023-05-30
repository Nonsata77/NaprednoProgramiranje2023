#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); 

    int target = rand() % 100 + 1; // se generira random broj od 1 do 100
    int guess, numGuesses = 0;

    do {
        cout << "Pogodi broj od 1 do 100 : ";
        cin >> guess;
        numGuesses++;

        if (guess < target) {
            cout << "Povisoko\n";
        } else if (guess > target) {
            cout << "Pomalo\n";
        }
    } while (guess != target);

    cout << "Bravo!!! Go pogodivte brojot posle " << numGuesses << " obidi." << endl; //go pokazhuva brojot na obidi

    return 0;
}