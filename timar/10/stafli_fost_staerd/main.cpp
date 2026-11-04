#include <iostream>

using namespace std;

class Stafli {
    private:
        int staflinn[10];
        int stafla_visir;
    public:
        int a;
        Stafli() {
            this->stafla_visir = 0;
        }

        void push(int stak) {
            if(this->stafla_visir < 10) {
                this->staflinn[this->stafla_visir++] = stak;
                // eða
                // this->staflinn[this->stafla_visir] = stak;
                // this->stafla_visir++;
            }
        }

        int pop() {
            if(this->stafla_visir > 0) {
               return this->staflinn[--this->stafla_visir]; 
               // eða
               // this->stafla_visir--;
               // return this->staflinn[this->stafla_visir];
            }
        }

        void prenta() {
            cout << "------------------------------------------\n";
            for(int i = 0; i < this->stafla_visir; i++) {
                cout << this->staflinn[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Stafli s = Stafli();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(60);
    s.prenta();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.prenta();
    s.push(40);
    s.prenta();
    return 0;
}
