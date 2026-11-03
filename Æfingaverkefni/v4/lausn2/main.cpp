#include <iostream>

#include "bankareikningur.hpp"

using namespace std;

int main() {
    Bankareikningur br = Bankareikningur("Tskóli", 100.0);
    br.prenta();

    if(br.taka_ut(50)) cout << "Gat tekið 50 út!" << endl;
    else cout << "Gat ekki tekið 50 út!" << endl;
    br.prenta();

    if(br.taka_ut(70)) cout << "Gat tekið 70 út!" << endl;
    else cout << "Gat ekki tekið 70 út!" << endl;
    br.prenta();

    if(br.leggja_inn(10)) cout << "Gat lagt 10 inn!" << endl;
    else cout << "Gat ekki lagt 10 inn!" << endl;
    br.prenta();
    
    if(br.leggja_inn(-10)) cout << "Gat lagt -10 inn!" << endl;
    else cout << "Gat ekki lagt -10 inn!" << endl;
    br.prenta();
    return 0;
}