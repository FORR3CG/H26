#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int inntak;
    int fjoldi_talna = 5;
    int summa = 0;
    for(int i = 0; i < fjoldi_talna; i++) {
        cout << "sláðu inn tölu: ";
        cin >> inntak;
        summa += inntak;
    }
    float medaltal = (float)summa / (float)fjoldi_talna;
    cout << "Meðaltal: " << fixed << setprecision(2) << medaltal << endl;
    return 0;
}