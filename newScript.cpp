#include <iostream>
#include <cmath>

using namespace std;

double calculateCircleArea(double radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    cout << "Select a shape to calculate the area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    if (choice == 1) {
        // Circle case
        double radius;
        cout << "You chose Circle." << endl;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if (radius > 0) {
            double area = calculateCircleArea(radius);
            cout << "The area of the circle is: " << area << endl;
        } else {
            cout << "Radius must be positive." << endl;
        }
    } else if (choice == 2) {
        // Square case
        double side;
        cout << "You chose Square." << endl;
        cout << "Enter the length of the side of the square: ";
        cin >> side;
        if (side > 0) {
            double area = calculateSquareArea(side);
            cout << "The area of the square is: " << area << endl;
        } else {
            cout << "Side length must be positive." << endl;
        }
    } else {
        cout << "Invalid choice. Please select 1, 2, or 3." << endl;
    }

    return 0;
}