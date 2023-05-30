#include <iostream>

using namespace std;

void add(void* x, void* y) {
    int* px = static_cast<int*>(x);
    int* py = static_cast<int*>(y);
    int result = *px + *py;
    cout << "Zbirot na " << *px << " i " << *py << " e " << result << endl;
}

void subtract(void* x, void* y) {
    int* px = static_cast<int*>(x);
    int* py = static_cast<int*>(y);
    int result = *px - *py;
    cout << "Razlikata pomegu " << *px << " i " << *py << " e " << result << endl;
}

void divide(void* x, void* y) {
    int* px = static_cast<int*>(x);
    int* py = static_cast<int*>(y);
    float result = static_cast<float>(*px) / static_cast<float>(*py);
    cout << "Kolicnikot pomegu " << *px << " i " << *py << " e " << result << endl;
}

void power(void* x, void* y) {
    int* px = static_cast<int*>(x);
    int* py = static_cast<int*>(y);
    double result = 1.0;
    for (int i = 0; i < *py; i++) {
        result *= static_cast<double>(*px);
    }
    cout << *px << " podignat na jacinata od " << *py << " e " << result << endl;
}

void calculate(void (*function)(void*, void*), void* x, void* y) {
    (*function)(x, y);
}

int main() {
    int x = static_cast<int>('A');
    int y = static_cast<int>('M');

    calculate(&add, &x, &y);
    calculate(&subtract, &x, &y);
    calculate(&divide, &x, &y);
    calculate(&power, &x, &y);

    return 0;
}