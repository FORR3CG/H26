#include <iostream>

using namespace std;
               // int fylki[]
void prenta_fylki(int* fylki, int staerd) {
    cout << "Í falli: " << sizeof(fylki) << endl;
    int* afrit_af_stadsetningu = fylki;
    // v
    // 1 2 3 4 5
    for(int i = 0; i < staerd; i++) {
        // cout << fylki[i] << endl;
        cout << *fylki << endl;
        fylki++;
        //           v
        // 1 2 3 4 5 ?
    }
    fylki = afrit_af_stadsetningu;
    // v                    
    // 1 2 3 4 5 ? ? ? ? ?
    int temp_staerd = staerd;
    for(;temp_staerd--;) {
        cout << *fylki << endl;
        fylki++;
        
    }
    fylki = afrit_af_stadsetningu;
    for(;staerd >= 0; staerd--) {
        cout << *fylki << endl;
        fylki++;
    }
}



void prenta_fylki_ptr(int* fylki, int staerd) {
    cout << "ptr fylki" << endl;
    while(staerd--) { // 0 er false, öll önnur gildi true
        cout << *fylki << endl;
        fylki++;
    }
}

int main() {
    int fylki[5] = {1,2,3,4,5};
    int staerd = sizeof(fylki) / sizeof(fylki[0]);
    cout << sizeof(fylki) << endl;
    for(int i = 0; i < staerd; i++) {
        cout << fylki[i] << endl;
    }
    prenta_fylki(fylki, staerd);
    prenta_fylki_ptr(fylki, staerd);

    int fylki_2d[3][2] = {{1,2},{3,4},{5,6}};
    int staerd_2d = sizeof(fylki_2d) / sizeof(fylki_2d[0][0]);
    int staerd_2d_fyrsta_array = sizeof(fylki_2d[0]);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << fylki_2d[i][j] << endl;
        }
    }
    prenta_fylki_ptr(*fylki_2d, staerd_2d);

    int fylki_3d[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},
                             {{10, 11, 12},{13,14,15},{16,17,18}},
                             {{19,20,21},{22,23,24},{25,26,27}}};
    int staerd_3d = sizeof(fylki_3d) / sizeof(fylki_3d[0][0][0]);
    prenta_fylki_ptr(**fylki_3d, staerd_3d);

    return 0;
}