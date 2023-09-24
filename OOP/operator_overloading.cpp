#include<iostream>
using namespace std;

class Complex
{
    private:
        float re, im;
    public:
        friend istream& operator >>(istream& in, Complex &c) {
            in >> c.re >> c.im;
            return in;
        };
        friend ostream& operator <<(ostream& out, Complex &c)  {
            out << c.re << " + " << c.im << "i";
            return out;
        }
        Complex operator +(Complex other) {
            Complex c;
            c.re = this->re + other.re;
            c.im = this->im + other.im;
            return c;
        }
};
        
int main()
{
    Complex c1, c2;
    cout << "Enter the first complex:  ";
    cin >> c1;
    cout << "Enter the second complex:  ";
    cin >> c2;
    Complex c3 = c1 + c2;
    cout << "The result of complex addition: ";
        cout << c3;
    return 0;
}
