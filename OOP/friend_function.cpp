#include <iostream>
using namespace std;

class Triangle {
    int side1;
    int side2;
    int side3;

    public:
    Triangle(int s1) {
        side1 = side2 = side3 =  s1;
    }
    Triangle(int s1, int s2) {
         side1 = side2 = s1;
         side3 = s2;
    }
    Triangle(int s1, int s2, int s3) {
         side1 = s1;
         side2 = s2;
         side3 = s3;
    }
    friend int getPerimeter(Triangle t) {
         int P = t.side1 + t.side2 + t.side3;
         return P;
    }
};

int main()
{
    Triangle t1(20), t2(10, 15), t3(3,4,5);
    cout << "The perimeter of the 1st triangle is: " << getPerimeter(t1) << endl;
    cout << "The perimeter of the 2nd triangle is: " << getPerimeter(t2) << endl;
    cout << "The perimeter of the 3rd triangle is: " << getPerimeter(t3) << endl;
    return 0;
}