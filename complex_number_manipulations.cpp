                                           //complex number manipulations:
#include <iostream>
#include <cmath>

using namespace std;

struct com_num
{
	private:
			int re, im;
	public:
			void enter()
			{
				cout << "Enter the real component: ";
					cin >> this -> re;
				cout << "Enter the imaginary component: ";
					cin >> this -> im;
			}
			friend void add(com_num a, com_num b)
			{
				cout << "The addition result: "<< a.re + b.re << " + " << a.im + b.im << "i" << endl;
			}
			friend void sub(com_num a,  com_num b)
			{
				cout << "The substraction result: " << a.re - b.re << " + " << a.im-b.im << "i" << endl;
			}
			friend void mul( com_num a,  com_num b)
			{
				cout << "The muitiplication result: "<< a.re * b.re - a.im * b.im << " + " 
					 								 << a.re * b.im + a.im * b.re << "i" << endl;
			}
			friend void div( com_num a,  com_num b)
			{
				double c = pow(b.re, 2) + pow(b.im, 2);
				cout << "The division result: " << (a.re * b.re + a.im * b.im ) / c << " + " 
												<< (a.im * b.re - a.re * b.im) / c << "i" << endl;
			}
};

main()
{	com_num a, b;
	a.enter();
	b.enter();
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}                                 