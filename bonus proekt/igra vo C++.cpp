#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, guess, attemptsLeft = 3;
    srand(time(NULL)); // Za generiranje na razlichni broevi sekoj pat koga kje se pushti programata
    secretNumber = rand() % 10 + 1; //generira sluchaen broj od 1 do 10

    cout << "Guess the secret number (1 to 10) in 3 attempts." << endl;

    do {
        cout << "Attempts left: " << attemptsLeft << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the secret number." << endl;
            break;
        } else {
            cout << "Sorry, your guess is incorrect." << endl;
            attemptsLeft--;
        }
    } while (attemptsLeft > 0);

    if (attemptsLeft == 0) {
        cout << "Game over. The secret number was " << secretNumber << "." << endl;
    }

    return 0;
}