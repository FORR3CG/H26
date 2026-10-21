#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int inntak;
    int summa = 0;
    int fjoldi_talna = 0;
    while(true) {
        cout << "sláðu inn jákvæða tölu (minni en 1001) (-1 til að hætta): ";
        cin >> inntak;
        if(inntak == -1) {
            break;
        } else if(inntak < 0 || inntak > 1000) {
            cout << "Talan verður að vera frá 0 til og með 1000, reyndu aftur." << endl;
            continue;
        }
        summa += inntak;
        fjoldi_talna++;
    }
    if(fjoldi_talna > 0) {
        float medaltal = (float)summa / (float)fjoldi_talna;
        cout << "Meðaltal: " << fixed << setprecision(2) << medaltal << endl;
    } else {
        cout << "Engin tala slegin inn, gat ekki reiknað meðaltal!!" << endl;
    }
    return 0;
}