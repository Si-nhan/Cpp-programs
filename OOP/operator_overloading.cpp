#include<iostream>
using namespace std;

class Complex
{
    private:
        float re, im;
    public:
        friend istream& operator >>(istream& enter, Complex &c) {
            enter >> c.re >> c.im;
            return enter;
        };
        void print() {
            cout << re << " + " << im << "i";
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
    c3.print();
    return 0;
}
