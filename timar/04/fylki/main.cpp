#include <iostream>

using namespace std;

int main() {
    // fylki - array
    int fylki[5] = {0};
    int fylki2[] = {1,2,3,4,5,6};
    cout << "stærð fylki: " << sizeof(fylki) 
         << ", stærð fylki[0]: " << sizeof(fylki[0]) << endl;
    int staerd_fylki = sizeof(fylki) / sizeof(fylki[0]);
    cout << "stærð fylki2: " << sizeof(fylki2) << endl;
    // fylki2.append(30); virkar ekki
    fylki[1] = 99;
    fylki[3] = 88;
    cout << fylki << endl;
    for(int i = 0; i < 5; i++) {
        fylki[i] += 100;
        cout << fylki[i] << endl;
    }

    int fylki_staerra[7] = {-1};
    for(int i = 0; i < staerd_fylki; i++) {
        fylki_staerra[i] = fylki[i];
    }

    short fylki_2d[2][3] = {{1,2,3},{4,5,6}};
    int staerd_3d_fylki = sizeof(fylki_2d) / sizeof(fylki_2d[0][0]);
    cout << staerd_3d_fylki << endl;
    fylki_2d[0][0] = 99;
    fylki_2d[1][1] = 88;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << fylki_2d[i][j] << " ";
        }
        cout << endl;
    }

    char ch_fylki[10][10] = {'A'};
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            ch_fylki[i][j] = 'A';
            cout << ch_fylki[i][j] << '\t';
        }
        cout << endl;
    }


    return 0;
}