#include <iostream>

using namespace std;
// punct in plan
class punct2d {
protected:
    int x;
    int y;

public:
    punct2d () {
        x = y = 0;
    }
    punct2d (int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
    double distantaOrigine() {
        return x*x + y*y;
    }
};

class cerc {
    punct2d c;
    int r;

public:
    cerc(punct2d c, int r) {
        this->c = c;
        this->r = r;
    }
    cerc() {
    }

    punct2d getC() {
        return c;
    }

    void setC(punct2d p) {
        c = p;
    }

    int getR() {
        return r;
    }

    void setR(int r) {
        this->r = r;
    }

    double aria() {
        return 3.14 * r * r;
    }

};

int main () {
    punct2d a(3, 3);
    cerc b(a, 5);



    int x = b.getC().getX();
    cout<<x<<"\n";
    punct2d p = b.getC();
    cout<<p.getX()<<"\n";

//    cout<<b.c.getX();

    cout<<b.aria();

}
