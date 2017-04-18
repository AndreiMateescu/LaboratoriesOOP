#include <iostream>
using namespace std;

class fractie{
    private:
        int a;
        int b;
        int cmmdc(int a, int b) {
            int r;
            while (b!=0) {
                r = a%b;
                a = b;
                b = r;
            }
            return a;
        }
    public:
        fractie() {
            a = 0;
            b = 1;
        }
        fractie(int a, int b) {
            this->a = a;
            this->b = b;
        }
        fractie(int a) {
            this->a = a;
            b = 1;
        }


        int getA() {
            return a;
        }
        void setA(int x) {
            a = x;
        }
        int getB() {
            return b;
        }
        void setB(int b) {
            this->b = b;
        }

        fractie suma(fractie x) {
            // aduna fractia urenta cu fractia data ca parametru si returneaza rezultatul prin functie
            fractie r;
            r.setB( b * x.getB() );
            r.setA( a*x.getB() + b*x.getA() );
            return r;
        }

        fractie produs(fractie h){
            fractie t;
            t.setA( a * h.getA());
            t.setB( b * h.getB());

            return t;
        }

        void simplifica() {
            int x = cmmdc(a, b);
            a = a/x;
            b = b/x;
        }
};

int main () {
    fractie x(3,1);
    fractie y(10,12);
    fractie z(3);
    //x.setA(2);
    z = x.produs(y);
    fractie t(10,12);
    t.simplifica();
    cout<<t.getA()<<" "<<t.getB();
    //cout<<x.a<<x.b;
    return 0;
}
