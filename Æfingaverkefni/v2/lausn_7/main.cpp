#include <iostream>

using namespace std;

void summa(int* fylki, int staerd, int& summan) {
    while(staerd--) { 
        summan += *fylki;
        fylki++;
    }
}

int main() {
    int tolur[] = {1, 2, 3, 4, 5, 6};
    int staerd = sizeof(tolur) / sizeof(*tolur);
    int samtals = 0;

    summa(tolur, staerd, samtals);

    cout << samtals << endl;
    // ætti að prenta út 21

    return 0;
}