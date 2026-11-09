#include <iostream>

#include "bankareikningur.hpp"

using namespace std;

int main() {
    Bankareikningur geir1 = Bankareikningur("Geir", 1000);
    Bankareikningur geir2 = Bankareikningur("Geir", 2000);

    cout << geir1 << endl << geir2 << endl;

    cout << (geir1 == geir2) << endl; // ætti að prenta 1
    cout << (geir1 < geir2) << endl; // ætti að prenta 1
    cout << (geir1 >= geir2) << endl; // ætti að prenta 0

    Bankareikningur tskoli = Bankareikningur("Tskóli", 1000);
    cout << (geir1 < tskoli) << endl; // ætti að prenta 1

    return 0;
}