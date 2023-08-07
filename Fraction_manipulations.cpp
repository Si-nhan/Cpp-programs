                                                                                //Fraction manipulations:
#include <iostream>
#include <string>

using namespace std;

int GCD(int a, int b)
{
    int i, gcd;
	for (i = (a < b)? a:b; i > 0; i--)
		if ((a % i == 0) && (b % i == 0)) {
			gcd = i;
			return gcd;
		}
}
class fraction
{
	private:
		int divident, divisor;
	public:
		void enter()
		{
			cout << "Enter the divident: ";
			cin >> this -> divident;
			cout << "Enter the divisor: ";
			cin >> this -> divisor;
		}
		void print()
		{
			cout << "The entered fraction is: "<< divident / GCD(divident, divisor) << "/" 
											   << divisor / GCD(divident, divisor) << endl;
		}
		void add(fraction fr1, fraction fr2)
		{
			int a, b;
			a = (fr1.divident * fr2.divisor) + (fr1.divisor * fr2.divident);
			b = fr1.divisor * fr2.divisor;
			cout << "The addition result: "<< a / GCD(a,b) << "/" << b / GCD(a,b) << endl;
		}
        void sub(fraction fr1, fraction fr2)
        {
            int a, b;
            a = (fr1.divident * fr2.divisor) - (fr1.divisor * fr2.divident);
			b = fr1.divisor * fr2.divisor;
			cout << "The substraction result: "<< a / GCD(a,b) << "/" << b / GCD(a,b) << endl;
        }
		void mul(fraction fr1, fraction fr2)
		{
			int a ,b;
			a = fr1.divident * fr2.divident;
			b = fr1.divisor * fr2.divisor;
			cout << "The multiplication result: "<< a / GCD(a,b) << "/" << b / GCD(a,b) << endl;

		}
		void div(fraction fr1, fraction fr2)
		{
			int a ,b;
			a = fr1.divident * fr2.divisor;
			b = fr1.divisor * fr2.divident;
			cout << "The division result: "<< a / GCD(a,b) << "/" << b / GCD(a,b) << endl;

		}
};

main()
{
 fraction fr1, fr2, fr3;
	fr1.enter();
	fr1.print();
	fr2.enter();
	fr2.print();
	fr3.add(fr1, fr2);
    fr3.sub(fr1, fr2);
	fr3.mul(fr1, fr2);
    fr3.div(fr1, fr2);	
}