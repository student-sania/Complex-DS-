// Q no:6
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
    Complex add(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex subtract(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex multiply(const Complex &c) {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
};
int main() {
    Complex c1, c2;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);
    Complex product = c1.multiply(c2);
    cout << "\nSum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();
    return 0;
}