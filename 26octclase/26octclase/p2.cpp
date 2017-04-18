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

class punct3d : public punct2d {
    int z;

public:

    punct3d() : punct2d(){ // se apeleaza mai intai construcorul fara parametri al clasei de baza
        z = 0;
    }

    punct3d(int x, int y, int z) : punct2d(x, y) {
        this->z = z;
    }

    int getZ(){
        return z;
    }

    void setZ(int z){
        this->z = z;
    }

    double distantaOrigine(){
        return  z*z + punct2d::distantaOrigine();
    }

};

int main () {
    punct2d a(2, 3);
    punct3d b(2, 3, 1);

    b.setX(2);
    b.setY(3);
    b.setZ(1);

    cout<<b.distantaOrigine();
}
