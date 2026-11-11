#include <iostream>

using namespace std;

struct strPunktur {
    // ósýnilegt, public:
    int x; 
    int y;
    strPunktur() {
        this->x = 0;
        this->y = 0;
    }
};

class Punktur {
    // ósýnilegt, private:
    int x;
    int y;
    public:
    Punktur() { // default constructor
        cout << "Default smiður" << endl;
        this->x = 0;
        this->y = 0;
    }
    Punktur(int x, int y) { // aukamiður
        cout << "Aukasmiður" << endl;
        this->x = x;
        this->y = y;
    }
    // getters/setters
    ~Punktur() { // eyðir (e. destructor)
        cout << "Eyðir" << endl;
        // tekur til - yfirleitt með delete
    }
};

class Punktastafli {
    Punktur* punktar;
    int staerd;
    int staflavisir; // vísar alltaf á næsta lausa stak
    public:
    Punktastafli();
    void push(Punktur p) {
        if(this->staflavisir < this->staerd) {
            this->punktar[this->staflavisir++] = p;
        } else {
            Punktur* punktar_nytt_array = new Punktur[this->staerd * 2];
            for(int i = 0; i < this->staerd; i++)
                punktar_nyrr_array[i] = this->punktar[i];
            delete [] this->punktar;
            this->punktar = punktar_nytt_array;
            this->staerd *= 2;
            this->push(p);
        }
    }
}

int* bua_til_fylki(int staerd) {
    int* fylki = new int[staerd];
    for(int i = 0; i < staerd; i++)
        fylki[i] = i;
    return fylki;
}

int main() {
    // Minnismeðhöndlun
    int* p = new int(30);
    delete p;
    for(int i = 0; i < 100; i++) {
        int* p_f = bua_til_fylki(100);
        // gerum eitthvað við hvert fylki
        delete [] p_f;
    }

    Punktur punktur;

    // Stafli (gagnagrindin)
    // push, pop, peek, LIFO

    return 0;
}
