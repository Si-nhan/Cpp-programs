#include <iostream>
using namespace std;

class Polyhedron {
    protected:
    double side;

    public:
    Polyhedron(double s) {
        side = s;
        cout << "A polyhedron " << endl;
    }
};

class Square: public Polyhedron {

    public:
    Square(double s): Polyhedron(s) {
        cout << "This is a Square with the side is: " << side << endl;
    };
};

int main()
{
    Square s2(10);
    return 0;
}
