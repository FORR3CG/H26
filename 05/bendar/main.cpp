#include <iostream>

using namespace std;

int main() {
    int a = 10; // gildi - value
    // & fyrir breytu skilar vistfangingu (e. address)
    cout << "gildi a: " << a << ", staðsetning í minni (address): " << &a << endl;
    // Hver er skilgreiningin á pointer?
    // Pointer er breyta sem geymir númer á minnishólfi en ekki gildi.
    int* a_ptr = &a;
    cout << "gildi a_ptr: " << a_ptr << ", addressa a_ptr: " << &a_ptr << endl;
    // * fyrir framan pointer-breytu, dereference-ar pointer og skilar 
    // gildinu sem pointerinn bendir á
    cout << "gildið sem a_ptr bendir á: " << *a_ptr << endl;
    float f = 3.14;
    float* f_ptr = &f;
    cout << "gildi f: " << f << ", addr: " << &f << ", gildi f_ptr: " << f_ptr
         << "gildið sem f_ptr bendir á: " << *f_ptr << endl;
    short* s_ptr = nullptr;
    cout << "stærð int*: " << sizeof(a_ptr) << ", stærð short*: " << sizeof(s_ptr)
         << ", stærð float*: " << sizeof(f_ptr) << endl;
    
    int fylki[] = {99,2,3,4,5};
    cout << fylki << endl;
    cout << *fylki << endl;
    // bendareikningar - pointer arithmetic
    int* fy_ptr = fylki;
    cout << "addr: " << fy_ptr << ", gildi: " << *fy_ptr << endl;
    // fy_ptr++; // fy_ptr = fy_ptr + 1;
    // fy_ptr++ -> bætir 4 við addressuna
    cout << *(fy_ptr + 0) << endl;
    cout << *(fy_ptr + 1) << endl;
    cout << *(fy_ptr + 2) << endl;
    //cout << "addr: " << fy_ptr << ", gildi: " << *fy_ptr << endl;

    cout << *fy_ptr << endl;
    fy_ptr += 3;
    cout << *fy_ptr << endl;
    fy_ptr--;
    cout << *fy_ptr << endl;

    return 0;
}