#include <iostream>
#include <string>

using namespace std;

class Dyr {
    private:
        int id;
        string nafn;
    public:
        Dyr() : id(-1), nafn("") {
            cout << "Dýr, default smiður" << endl;
        }
        Dyr(int id, string nafnid) : id(id), nafn(nafnid) {
            cout << "Dýr, aukasmiður" << endl;
        }
        int get_id() { return this->id; }
        string get_nafn() { return this->nafn; }
        virtual void prenta() {
            cout << "Dýr, id: " << this->id << ", nafn: " << this->nafn << endl;
        }
        ~Dyr() {
            cout << "Dýr, destructor" << endl;
        }
};

class Hundur : public Dyr { // class Undirklasi(Yfirklasi):
    private:
        int einkunn;
    public:
        Hundur() : einkunn(0) {
            cout << "Hundur, default smiður" << endl;
        }
        Hundur(int id, string nafn, int einkunn) 
                : Dyr(id, nafn), einkunn(einkunn) {
            cout << "Hundur, aukasmiður" << endl;
        }
        void prenta() {
            cout << "Hundur, id: " << this->get_id() << ", nafn: "
                 << this->get_nafn() << ", einkunn: " 
                 << this->einkunn << endl;
        }
        ~Hundur() {
            cout << "Hundur, destructor" << endl;
        }
    };
    
    class Kottur : public Dyr {
        private:
        string eigandi;
        public:
        Kottur() {
            cout << "Köttur, default smiður" << endl;
        }
        Kottur(int id, string nafn, string eigandi) : Dyr(id, nafn), eigandi(eigandi) {
            cout << "Köttur: aukasmiður" << endl;
        }
        void prenta() {
            cout << "Köttur, id: " << this->get_id() << ", nafn: "
                 << this->get_nafn() << ", eigandi: " 
                 << this->eigandi << endl;
        }
        ~Kottur() {
            cout << "Köttur, destructor" << endl;
        }
};

int main() {
    Hundur* h = new Hundur(11, "Snati", 8);
    Dyr* dg[5];
    Dyr** dgp = new Dyr*[5];
    dg[0] = h;
    dg[1] = new Kottur(12, "Grettir", "Jón");
    for(int i = 0; i < 2; i++) {
        dg[i]->prenta();
    }
    //Kottur k; 
    return 0;
}

