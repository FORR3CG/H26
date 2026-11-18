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
            this->staerd = 3;
            this->fjoldi = 0;
            this->listinn = new int[this->staerd];
        }

        ~Listi() {
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
};

int main() {
    Listi l;
    l.setja_fremst(10);
    l.setja_fremst(20);
    l.setja_fremst(30);
    l.setja_fremst(40);
    return 0;
}