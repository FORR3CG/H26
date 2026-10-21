#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int inntak;
    int fjoldi_talna = 5;
    int summa = 0;
    int fjoldi_innsleginna_talna = 0;
    do {
        cout << "sláðu inn tölu: ";
        cin >> inntak;
        if(inntak < 0 || inntak > 1000) {
            cout << "Talan verður að vera frá 0 til og með 1000, reyndu aftur." << endl;
            continue;
        }
        summa += inntak;
        fjoldi_innsleginna_talna++;
    } while(fjoldi_innsleginna_talna < fjoldi_talna);
    float medaltal = (float)summa / (float)fjoldi_talna;
    cout << "Meðaltal: " << fixed << setprecision(2) << medaltal << endl;
    return 0;
}