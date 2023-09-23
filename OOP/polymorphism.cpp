#include <iostream>
using namespace std;

class Polygon {
    protected:
    int numSide; // the side number of the polygon
    int side[5]; // the side[] array with a random number of elements first

    public:
    Polygon(int numSide) {
        this->numSide = numSide;
        side[numSide] = {0};
        cout << "Enter sides: ";
        for (int i = 0; i < numSide; i++)
            cin >> side[i];
    }
    int getPerimeter () {
        int perimeter = 0;
        for (int i = 0; i < numSide; i++) 
            perimeter += side[i];
        return perimeter;
    }
    void getAll() {
        cout << "The polygon has " << numSide << " sides" << endl;
        cout << "Sides: "; 
        for (int i = 0; i < numSide; i++)
            cout << side[i] << ' ';
        cout << endl << "Perimeter: " << getPerimeter() << endl;

    }
};
class Polyhedron: public Polygon {
    public:
    Polyhedron(int numSide): Polygon(numSide) {}
    void getAll() {
        cout << "The polyhedron has " << numSide << " sides" << endl;
        cout << "Sides: "; 
        for (int i = 0; i < numSide; i++)
            cout << side[i] << ' ';
        cout << endl << "Perimeter: " << getPerimeter() << endl;
    };
};
class Square: public Polyhedron {
    public:
    Square() : Polyhedron(4) {}
    void getAll() {
        cout << "The square with side length: " << side[0];
        cout << endl << "Perimeter: " << getPerimeter();
    }
};
int main()
{
    Polygon p1(5);
    Polyhedron p2(6);
    Square s;
    p1.getAll();
    p2.getAll();
    s.getAll();
}
