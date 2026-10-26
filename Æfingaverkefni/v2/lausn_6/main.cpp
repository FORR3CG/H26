#include <iostream>

using namespace std;

// lausn með while lykkju
int summa(int* fylki, int staerd) {
    int summa = 0;
    while(staerd--) { // núll er false, öll önnur gildi true
        summa += *fylki;
        fylki++;
    }
    return summa;
}

// lausn með for lykkju
int summa_for(int* fylki, int staerd) {
    int summa = 0;
    for(int i = 0; i < staerd; i++) { // i aldrei notað
        summa += *fylki;
        fylki++;
    }
    return summa;
}

// önnur lausn með for lykkju
int summa_for2(int* fylki, int staerd) {
    int summa = 0;
    for(; staerd-- ;) {
        summa += *fylki;
        fylki++;
    }
    return summa;
}

int main() {
    int tolur[] = {1, 2, 3, 4, 5, 6};
    int staerd = sizeof(tolur) / sizeof(*tolur);

    cout << summa(tolur, staerd) << endl;
    cout << summa_for(tolur, staerd) << endl;
    cout << summa_for2(tolur, staerd) << endl;
    // ætti að prenta út 21

    return 0;
}