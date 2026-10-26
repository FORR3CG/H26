#include <iostream>

using namespace std;

//              pass by value
int leggja_saman(int a, int b) {
    return a + b;
}

// summa verður pass by reference
void leggja_saman(int& summa, int a, int b) {
    summa = a + b;
}

//        pass by reference
void vixla(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int j = 10;
    int k = 20;
    vixla(j, k);
    cout << j << " - " << k << endl;
    int summa = leggja_saman(j, k);
    int summa2 = leggja_saman(10, 20);
    int summa3 = 0;
    leggja_saman(summa3, j, k);
    cout << summa3 << endl;
    return 0;
}