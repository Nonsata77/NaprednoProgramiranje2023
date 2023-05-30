#include <iostream>

using namespace std;

class operations {
public:
    int num1, num2;

    void input() {
        cout << "Enter two numbers to perform operations on: \n";
        cin >> num1 >> num2;
        cout << "\n";
    }

    void addition() {
        cout << "Addition = " << num1 + num2 << "\n";
    }

    void subtraction() {
        cout << "Subtraction = " << num1 - num2 << "\n";
    }

    void multiplication() {
        cout << "Multiplication = " << num1 * num2 << "\n";
    }

    void division() {
        cout << "Division = " << (float) num1 / num2 << "\n";
    }

    void num1num2() {
        cout << "num1num2 = " << num1 + num2 << "\n";
    }
};

int main() {
    cout << " ===== Program to perform basic operations using Class, in CPP ===== \n\n";
    operations op;

    cout << "\nCalling the input() function from the main() method\n";
    op.input();

    cout << "\nCalling the addition() function from the main() method\n";
    op.addition();

    cout << "\nCalling the subtraction() function from the main() method\n";
    op.subtraction();

    cout << "\nCalling the multiplication() function from the main() method\n";
    op.multiplication();

    cout << "\nCalling the division() function from the main() method\n";
    op.division();

    cout << "\nCalling the num1num2() function from the main() method\n";
    op.num1num2();

    cout << "\nExiting the main() method\n\n\n";
    return 0;
}