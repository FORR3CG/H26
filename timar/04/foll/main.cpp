#include <iostream>

using namespace std;

void prenta_nafn() {
    cout << "Geir" << endl;
}

int summa(int a, int b) {
    return a + b;
}

int summa(int a, int b, int c) {
    return a + b + c;
}

float summa(float a, float b) {
    return a + b;
}

double summa(double a, double b) {
    return a + b;
}

int margfalda(int, int);

int main() {
    cout << summa(10, 20, 30) << endl;
    margfalda(10, 20);
    prenta_nafn();
    return 0;
}

int margfalda(int a, int b) {
    return a * b;
}