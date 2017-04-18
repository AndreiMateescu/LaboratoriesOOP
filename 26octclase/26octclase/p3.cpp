#include <iostream>
#include <cstring>

using namespace std;

class persoana{
    char *nume;
    int varsta;

public:
    persoana(char *nume, int varsta) {
        int len = strlen(nume);
        this->nume = new char[len+2];
        strcpy(this->nume, nume);
        this->varsta = varsta;
    }

    ~persoana() {
        delete nume;
    }

    void tipareste() {
        cout<<nume<<"\n";
    }
};

int main () {

    persoana p("ion", 4);
    p.tipareste();

    return 0;
}
