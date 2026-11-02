#include <iostream>

using namespace std;

void prenta_fylki(int* fylki, int staerd) {
    for(int i = 0; i < staerd; i++) {
        cout << fylki[i] << " ";
    }
    cout << endl;
}

int* bua_til_fylki(int staerd) {
    int* fylki = new int[staerd];
    for(int i = 0; i < staerd; i++) {
        if(i > 30)
            fylki[i] = i / 3;
        else fylki[i] = i;
    }
    //cout << "Í bua_til_fylki" << endl;
    //prenta_fylki(fylki, staerd);
    return fylki;
}

int main() {
    int* f = bua_til_fylki(5);
    for(int i = 0; i < 10000; i++) {
        int* m = bua_til_fylki(100000);
        delete [] m;
    }
    cout << "Í main" << endl;
    for(int i = 0; i < 5; i++) {
        cout << f[i] << " ";
    }
    cout << endl;
    // prenta_fylki(fylki, 5);
    int i_stack = 10;
    int* i_ptr = &i_stack;
    int* i_heap = new int(20);
    cout << &i_stack << " " << &i_heap << " " << i_heap << " " << *i_heap << endl;
    //double* d_heap = new double(3.14);
    cout << "búið" << endl;
    int inntak;
    //cin >> inntak;
    delete i_heap;
    delete [] f;
    return 0;
}