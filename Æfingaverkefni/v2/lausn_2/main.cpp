#include <iostream>

using namespace std;

int main() {
    int tala = 8;
    int* tala_ptr = &tala;
    *tala_ptr = 20;
    cout << tala << endl;
    *tala_ptr += 5; // eða *tala_ptr = *tala_ptr + 5;
    cout << tala << endl;
    *tala_ptr *= 2; // eða *tala_ptr = *tala_ptr * 2;
    cout << tala << endl;
    return 0;
}