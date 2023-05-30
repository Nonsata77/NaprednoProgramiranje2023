#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    float width, height;
public:
    void setDimensions(float w, float h) {
        cout << "Setting the dimensions using the parent class: Shape\n";
        cout << "The dimensions are: " << w << " and " << h << "\n\n";
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    float area() {
        return (width * height);
    }
};

class Triangle : public Shape {
private:
    float hypotenuse; // Zashtitena promenliva
public:
    void setDimensions(float w, float h) {
        cout << "Setting the dimensions using the child class: Triangle\n";
        cout << "The dimensions are: " << w << " and " << h << "\n\n";
        width = w;
        height = h;
        hypotenuse = sqrt((width * width) + (height * height)); // Ja presmetuva hipotenuzata
    }
    float area() {
        return (width * height / 2);
    }
    float getHypotenuse() {
        return hypotenuse;
    }
};

int main() {
    cout << " ===== Program to demonstrate the concept of Hierarchical Inheritance in CPP ===== \n\n";
    Rectangle rectangle;
    Triangle triangle;
    rectangle.setDimensions(97, 5);
    triangle.setDimensions(9, 75);
    cout << "Area of the rectangle computed using Rectangle class is: " << rectangle.area() << "\n\n";
    cout << "Area of the triangle computed using Triangle class is: " << triangle.area() << "\n";
    cout << "Hypotenuse of the triangle is: " << triangle.getHypotenuse() << "\n\n";
    return 0;
}