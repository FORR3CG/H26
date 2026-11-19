#include <iostream>

using namespace std;

class A {
    private: // Eingöngu aðgengilegar innan klasans
        int pri_a;
    protected: // Aðgengilegar innan klasan og í þeim klösum sem erfa frá honum
        int pro_a;
    public: // Aðgengilegt allsstaðar
        int pub_a;
};

// public og protected breytur/föll A verða private í B
class B : private A {
    private:
        int pri_b;
    protected:
        int pro_b;
    public:
        int pub_b;
        B() {
            //cout << "pri_a" << this->pri_a << endl;
            cout << "pro_a" << this->pro_a << endl;
        }
};

// public breytur/föll A verða protected í C (engin breyting á protected og private)
class C : protected A {
    private:
        int pri_c;
    protected:
        int pro_c;
    public:
        int pub_c;
        C() {
            cout << this->pro_a << endl;
        }
};

// public breytur/föll A verða public í D (engin breyting á protected og private)
class D : public A {
    public:
    D() {
        cout << this->pub_a << endl;
    }
};

int main() {
    A a;
    a.pub_a = 10;
    // a.pro_a = 30;
    // a.pri_a = 20;
    B b;
    //cout << b.pub_a << endl;
    C c;
    D d;
    return 0;
}