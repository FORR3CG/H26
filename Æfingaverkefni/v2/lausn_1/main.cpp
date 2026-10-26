#include <iostream>

using namespace std;

int main() {
    int tala = 25;
    int* tala_ptr = &tala;
    cout << tala << endl;       // 1. Gildið á tala
    cout << &tala << endl;      // 2. Vistfangið á tala
    cout << tala_ptr << endl;   // 3. Vistfangið sem tala_ptr geymir
    cout << *tala_ptr << endl;  // 4. Gildið sem tala_ptr bendir á.
    return 0;
}
