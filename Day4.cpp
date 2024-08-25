//Q1
"""
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Division: Undefined (cannot divide by zero)" << endl;
        cout << "Modulus: Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}  
"""

//Q2
"""
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }

    Complex operator - (const Complex& obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();

    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    Complex difference = c1 - c2;
    cout << "Difference: ";
    difference.display();

    return 0;
}

"""
