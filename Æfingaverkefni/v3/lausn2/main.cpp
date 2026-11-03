#include <iostream>

using namespace std;

int main() {
    int fjoldi;
    int summa = 0;
    cout << "Hversu margar tölur á að leggja saman: ";
    cin >> fjoldi;
    int* tolur = new int[fjoldi];
    for(int i = 0; i < fjoldi; i++) {
        cout << "Tala " << i + 1 << " af " << fjoldi << ": ";
        cin >> tolur[i];
        summa += tolur[i];
    }
    for(int i = 0; i < fjoldi; i++) {
        cout << tolur[i] << " ";
    }
    cout << endl;
    cout << "Summa: " << summa << endl;
    delete [] tolur;
    return 0;
}