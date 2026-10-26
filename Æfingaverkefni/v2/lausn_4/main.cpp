#include <iostream>

using namespace std;

int main() {
    int tolur[5] = {10, 20, 30, 40, 50};
    int* tolur_ptr = tolur;
    // Upphafsstaða
    //  v
    // 10 20 30 40 50
    cout << *tolur_ptr << " ";
    
    // Færum okkur á stak 5 (50)
    tolur_ptr += 4; 
    //              v
    // 10 20 30 40 50
    cout << *tolur_ptr << " ";
    
    // Færum okkur tvö stök til baka (30)
    tolur_ptr -= 2; 
    //        v
    // 10 20 30 40 50
    cout << *tolur_ptr << " ";
    
    // Færum okkur eitt stak til baka (20)
    tolur_ptr--; 
    //     v
    // 10 20 30 40 50
    cout << *tolur_ptr << " ";
    
    // Förum svo tvisvar eitt stak áfram
    tolur_ptr++; 
    //        v
    // 10 20 30 40 50
    tolur_ptr++;
    //           v
    // 10 20 30 40 50
    cout << *tolur_ptr << " " << endl;

    return 0;
}