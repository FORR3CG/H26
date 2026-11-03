#include <iostream>

using namespace std;

int* bua_til_fylki(int fjoldi) {
    int* fylki = new int[fjoldi];
    for(int i = 0; i < fjoldi; i++)
        fylki[i] = i + 1;
    return fylki;
}

int main() {
    int* f = bua_til_fylki(10);
    for(int i = 0; i < 10; i++)
        cout << f[i] << " ";
    cout << endl;
    return 0;
}