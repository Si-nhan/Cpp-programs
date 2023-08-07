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
			void add(com_num a, com_num b)
			{
				cout << "The addition result: "<< a.re + b.re << " + " << a.im + b.im << "i" << endl;
			}
			void sub(com_num a,  com_num b)
			{
				cout << "The substraction result: " << a.re - b.re << " + " << a.im-b.im << "i" << endl;
			}
			void mul( com_num a,  com_num b)
			{
				cout << "The muitiplication result: "<< a.re * b.re - a.im * b.im << " + " 
					 								 << a.re * b.im + a.im * b.re << "i" << endl;
			}
			void div( com_num a,  com_num b)
			{
				double c = pow(b.re, 2) + pow(b.im, 2);
				cout << "The division result: " << (a.re * b.re + a.im * b.im ) / c << " + " 
												<< (a.im * b.re - a.re * b.im) / c << "i" << endl;
			}
};

main()
{	com_num a, b, c;
	a.enter();
	b.enter();
	c.add(a,b);
	c.sub(a,b);
	c.mul(a,b);
	c.div(a,b);
}                                 