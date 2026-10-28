#include <iostream>

using namespace std;

void fall() {
    // void fall skilar engu
    for(int i = 0; i < 20; i++) {
        cout << i << endl;
        if(i == 5) {
            return;
        }
    }
    cout << "ABC" << endl;
}

//         pass by reference
void vixla(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//       pass by value
int summa(int a, int b) {
    return a + b;
}

int main() {
    int x = 0xA; // 10 tugakerfi, 0x10 hex, 010 oct, 0b10 binary
    cout << x << endl;
    int y = 20;
    cout << x << ":" << y << endl;  // 10:20
    vixla(x, y);
    cout << x << ":" << y << endl;  // 20:10
    cout << summa(x, y) << endl;
    // gagnatög
    // heiltölur: char (8 bitar), short (16), int (32), long (64)
    // kommutölur: float (32), double (64)
    // bool (8 bitar)
    cout << sizeof(bool) << endl;
    // modifier
    // unsigned

    // heiltölubreytur geta ekki geymt kommutölur
    int i = 1;
    int j = 2;
    cout << i / j << endl; // 0
    cout << (float)i / (float)j << endl; // 0.5
    cout << i / j << endl; // 0
    int k = (float)i / (float)j;
    cout << k << endl;
    float f = i / (float)j;
    cout << f << endl;

    unsigned char uc = -1;
    cout << uc << endl;
    cout << (short)uc << endl;
    unsigned int ui = -1;

    i++; // i-- // i = i + 1, i += 1
    ++i; // --i

    // i++, nota breytuna fyrst, hækkana hana svo
    // ++i, hækka breytuna fyrst, nota hana svo

    i = 1;
    cout << i++ << ++i << endl; // 13
    for(int i = 0; i < 3; i++) {
        cout << i << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; ++i) {
        cout << i << " ";
    }
    cout << endl;

    i = 3;
    cout << "while(i--):" << endl;
    while(i--) { // python: while -1: jafngildir while True: 
        cout << i << " ";
    }
    cout << endl << "i eftir fyrra while: " << i << endl;
    cout << endl << "while(--i)" << endl;
    i = 3;
    while(--i) {
        cout << i << " ";
    }
    cout << endl << "i eftir seinna while: " << i << endl;
    cout << endl;

    if(-1) cout << "mínus einn prentast" << endl;
    if(0) cout << "núll prentast ekki" << endl;
    if(1) cout << "einn prentast" << endl;

    int stig = 6;
    // prenta út "gott" ef stig er stærra eða sama sem 5 annars "ekki gott"
    if(stig >= 5) cout << "gott" << endl; else cout << "ekki gott" << endl;
    // ternary operator
    cout << ((stig >= 5) ? "gott" : "ekki gott") << endl;
    int a = (stig >= 5) ? 100 : 0;

    int gildi = 10;
    int* gildi_ptr = &gildi;
    *gildi_ptr = 20;
    cout << *gildi_ptr << endl;

    return 0;
}