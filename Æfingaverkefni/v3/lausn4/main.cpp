#include <iostream>

using namespace std;

int main() {
    int* tolur = new int[3]{10, 20, 30};
    int* temp_tolur = new int[6];
    for(int i = 0; i < 3; i++) {
        temp_tolur[i] = tolur[i];
    }
    delete [] tolur;
    tolur = temp_tolur;

    tolur[3] = 40;
    tolur[4] = 50;
    tolur[5] = 60;

    for(int i = 0; i < 6; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;
    
    delete [] tolur;

    return 0;
}