#include <iostream>
using namespace std;

class Polygon {
    // Hoàn thành các thuộc tính numSide và side
    protected:
    int numSide;
    int side[5];

    public:
    //Hoàn thành hàm tạo nhận tham số nguyên là số cạnh của đa diện
    Polygon(int numSide) {
        this->numSide = numSide;
        side[numSide] = {0};       
    }
    //Hoàn thành hàm chu vi của đa diện
    int getPerimeter () {
        int perimeter = 0;
        for (int i = 0; i < numSide; i++) 
            perimeter += side[i];
        return perimeter;
    }
};

//Hoàn thành lớp Tứ giác (Quadrilateral) kế thừa từ Polygon
class Quadrilateral: public Polygon {
    public:
    Quadrilateral() : Polygon(4) {
        cout << "Enter the quad's side lengths: ";
        for (int i = 0; i < numSide; i++) 
            cin >> side[i];
    }
};

//Hoàn thành lớp Hình đa diện đều (Polyhedron) kế thừa từ Polygon
class Polyhedron : public Polygon {
    public:
    Polyhedron(int numSide) : Polygon(numSide) {
        cout << "Enter a side length of the Pohe: ";
            cin >> side[0];
        for (int i = 1; i < numSide; i++) {
            side[i] = side[i-1];
        }
    };
};
int main()
{
    Quadrilateral q;
    Polyhedron p(6);
    cout << "Quadrilateral: " << q.getPerimeter() << endl;
    cout << "Polyhedron: " << p.getPerimeter() << endl;
    return 0;
}