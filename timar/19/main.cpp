#include <iostream>

using namespace std;

class Listi {
    private:
        int* listinn;
        int staerd;
        int fjoldi;
        void staekka_um(int staekkun) {
            int* nyr_listi = new int[this->staerd + staekkun];
            for(int i = 0; i < this->fjoldi; i++)
                nyr_listi[i] = this->listinn[i];
            delete [] this->listinn;
            this->listinn = nyr_listi;
            this->staerd += staekkun;
        }
    public:
        Listi() {
            cout << "Smiðurinn" << endl;
            this->staerd = 3;
            this->fjoldi = 0;
            this->listinn = new int[this->staerd];
        }

        // "Bannar" afritun á klasanum
        // Listi(Listi& annar) = delete;
        // Listi& operator=(Listi& annar) = delete;

        // Afritunarsmiður, erum að búa til nýjan lista út frá gömlum
        // Listi nyr_listi(gamli_listinn)
        Listi(Listi& gamli_listinn) {
            cout << "Afritunarsmiður" << endl;
            this->staerd = gamli_listinn.staerd;
            this->fjoldi = gamli_listinn.fjoldi;
            this->listinn = new int[gamli_listinn.staerd];
            for(int i = 0; i < this->fjoldi; i++)
                this->listinn[i] = gamli_listinn.listinn[i];
        }

        // Eigum lista og erum að afrita úr öðrum lista
        // Listi k;
        // k = gamli_listinn;
        Listi& operator=(Listi& gamli_listinn) {
            cout << "assignment operator" << endl;
            // Listi k;
            // k = k
            if(this == &gamli_listinn)
                return *this;
            
            int* nyr_listi = new int[gamli_listinn.staerd];
            for(int i = 0; i < gamli_listinn.fjoldi; i++)
                nyr_listi[i] = gamli_listinn.listinn[i];
            delete [] this->listinn;
            this->listinn = nyr_listi;
            this->staerd = gamli_listinn.staerd;
            this->fjoldi = gamli_listinn.fjoldi;
            return *this;
        }

        ~Listi() {
            cout << "Destructor" << endl;
            delete [] this->listinn;
        }

        void setja_aftast(int stak) { // append, push
            if(this->fjoldi >= this->staerd) {
                this->staekka_um(10);
            }
            this->listinn[this->fjoldi++] = stak;
        }

        bool setja_i_saeti(int saeti, int stak) { // insert_at, python: insert(self, index, object, /)
            if(saeti < 0 || saeti > this->fjoldi) {
                return false;
            }
            if(this->fjoldi >= this->staerd)
                this->staekka_um(10);
            // for(int i = 9; i > 5; i--)
            for(int i = this->fjoldi; i > saeti; i--) {
                this->listinn[i] = this->listinn[i - 1];
            }
            this->listinn[saeti] = stak;
            this->fjoldi++;
            return true;
        }

        bool setja_fremst(int stak) {
            return this->setja_i_saeti(0, stak);
        }

        bool fjarlaegja_saeti(int saeti, int& stak) {
            if(saeti < 0 || saeti >= fjoldi)
                return false;
            stak = this->listinn[saeti];
            // for(int i = 5; i < 8; i++)
            for(int i = saeti; i < this->fjoldi - 1; i++) {
                this->listinn[i] = this->listinn[i + 1];
            }
            this->fjoldi--;
            return true;
        }

        bool fjarlaegja_fremsta(int& stak) {
            return this->fjarlaegja_saeti(0, stak);
        }

        bool fjarlaegja_aftasta(int& stak) {
            // return fjarlaegja_saeti(this->fjoldi - 1, stak);
            // eða
            if(this->fjoldi > 0) {
                stak = this->listinn[--this->fjoldi];
                return true;
            }
            return false;
        }

        int finna_tolu(int tala) {
            for(int i = 0; i < this->fjoldi; i++) {
                if(this->listinn[i] == tala)
                    return i;
            }
            return -1;
        }

        bool fjarlaegja_stak(int tala, int& stak) {
            int idx = this->finna_tolu(tala);
            if(idx != -1) return this->fjarlaegja_saeti(idx, stak);
            return false;
        }

        void prenta() {
            for(int i = 0; i < this->fjoldi; i++)
                cout << this->listinn[i] << " ";
            cout << endl;
        }
};

int main() {
    Listi listi;
    Listi listi2(listi);
    Listi listi3 = listi;
    Listi listi4;
    listi4 = listi;
    return 0;
    Listi l;
    l.setja_fremst(10);
    l.setja_fremst(20);
    l.setja_fremst(30);
    l.setja_fremst(40);
    cout << "Listi l: " << endl;
    l.prenta();
    cout << "Listi l2:" << endl;
    Listi l3(l);
    Listi l2 = l;
    l2.prenta();
    int stak;
    if(l.fjarlaegja_stak(30, stak)) {
        cout << "Fjarlægði " << stak << " úr listal l" << endl;
    } else {
        cout << "Fann ekki það sem leitað var að!" << endl;
    }
    cout << "Listi l:" << endl;
    l.prenta();
    cout << "Listi l2:" << endl;
    l2.prenta();
    return 0;
}