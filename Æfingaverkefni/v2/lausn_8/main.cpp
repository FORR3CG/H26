#include <iostream>

using namespace std;

int index_a_staersta_staki(unsigned int* fylki, int staerd) {
    unsigned int staersta_talan = 0;
    int staersti_index = 0;
    for(int i = 0; i < staerd; i++) {
         if(*fylki > staersta_talan) {
            staersta_talan = *fylki;
            staersti_index = i;
         }
         fylki++;
    }
    return staersti_index;
}

int main() {
    unsigned int tolur[] = {10, 7, 3, 20, 8, 9};
    int staerd = sizeof(tolur) / sizeof(*tolur);

    int staersti_idx = index_a_staersta_staki(tolur, staerd);
    cout << "stærsta talan er: " << tolur[staersti_idx] << endl;
    // ætti að skrifa út "stærsta talan er: 20"
    return 0;
}

