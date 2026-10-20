#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // heiltölur
    char t1 = 10; // 8 bitar -> -128 til og með 127
    short t2 = 20; // 16 bitar => 2^16
    int breyta = 3.14; // int - 32 bita heiltölubreyta
    long t3 = 30; // 64 bitar

    // ef við viljum ekki vera með neikvæða tölu 
    unsigned char t5 = -2; 
    unsigned long t4 = -1;
    cout << "t4: " << t4 << " og stærðin er " << sizeof(t4) << " bæti." << endl;
                    // typecasting
    cout << "t5: " << (short)t5 << " og stærðin er " << sizeof(t5) << " bæti." << endl;
    int c = 0;
    c += 1; // c = c + 1;
    c++;
    ++c;
    c--;
    --c;

    cout << "c: " << c << endl;
    cout << "c: " << c++ << '\t' << ++c << endl;
    cout << "c: " << ++c << '\t' << c++ << endl;
    cout << "c: " << c << endl;

    int a = 99;
    int b = 100;
    // python heiltöludeiling //
    cout << a / b << endl;
    cout << (float)a / (float)b << endl;
    // mismunandi rithættir
    float c2 = float(a) / (float)b;
    // kommutölu gagnatög
    float f1 = 3.14; // 32 bita tala - ca. 6 nákvæmir aukastafir
    double d1 = 10.2355; // 64 bita tala - ca. 15 námvæmir aukastafir

    cout << "d1: " << d1 << endl;
    cout << fixed << setprecision(3) <<"d1: " << d1 << endl;

    float f2 = 99;
    float f3 = 100;
    cout << f2 / f3 << endl;

    // bool
    bool satt = true; // eða false

    // stafir og strengir
    char stafur = 'T';
    string texti = "einhver texti";

    return 0;
}