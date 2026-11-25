#include <iostream>

using namespace std;

class A {
    private:
        int pri_a;
    public:
        int pub_a;
    protected:
        int pro_a;
};

class B : public A /* protected og private erfðir ekki til prófs */ {

};

int main() {
    
    return 0;
}