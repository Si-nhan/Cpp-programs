#include <iostream>
using namespace std;

class Polyhedron {
  //Viết thuộc tính side 
    double side;

    public:
    Polyhedron(double s) {
        side = s;
        cout << "A polyhedron " << side << endl;
    }
};

//Hoàn thành lớp Square là lớp kế thừa của Polyhedron
class Square: public Polyhedron {

    public:
    //Hoàn thành lớp Square là lớp kế thừa của Polyhedron
    Square(double s): Polyhedron(s) {
        cout << "This is a Square " << s << endl;
    };
};

int main()
{
    Square s2(10);
    return 0;
}
