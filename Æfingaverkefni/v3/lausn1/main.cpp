#include <iostream>

using namespace std;

int main() {
    int* h = new int(25);
    cout << *h << endl;
    *h = 50;
    cout << *h << endl;
    delete h;
    return 0;
}