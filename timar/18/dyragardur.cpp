#include "dyragardur.hpp"

void Dyragardur::staekka_um(int staekkun) {
    Dyr** nyr_listi = new Dyr*[this->staerd + staekkun];
    for(int i = 0; i < this->fjoldi; i++) 
        nyr_listi[i] = this->listinn[i];
    delete [] this->listinn;
    this->listinn = nyr_listi;
    this->staerd += staekkun;
}

Dyragardur::Dyragardur(): listinn(new Dyr*[3]), staerd(3), fjoldi(0) {}


Dyragardur::Dyragardur(Dyragardur &annar) 
        : listinn(new Dyr*[annar.staerd]), 
          staerd(annar.staerd), fjoldi(annar.fjoldi) {
    for(int i = 0; i < this->fjoldi; i++)
        this->listinn[i] = annar.listinn[i]->afrita();
}

Dyragardur &Dyragardur::operator=(Dyragardur &annar) {
    // Listi k;
    // k = k;
    if(this == &annar) {
        return *this;
    }
    // þurfum að eyða dýrunum sem eru nú þegar í this
    for(int i = 0; i < this->fjoldi; i++)
        delete this->listinn[i];
    delete [] this->listinn;

    this->staerd = annar.staerd;
    this->listinn = new Dyr*[this->staerd];
    this->fjoldi = annar.fjoldi;
    for(int i = 0; i < this->fjoldi; i++)
        this->listinn[i] = annar.listinn[i]->afrita();
    return *this;
}

int Dyragardur::finna_dyr_med_id(int id) {
    for(int i = 0; i < this->fjoldi; i++)
        if(this->listinn[i]->get_id() == id)
            return i;
    return -1;
}

bool Dyragardur::setja_i_saeti(int saeti, Dyr* stak) {
    if(saeti < 0 || saeti > this->fjoldi || stak == nullptr)
        return false;
    if(this->fjoldi >= this->staerd)
        this->staekka_um(3);
    for(int i = this->fjoldi; i > saeti; i--)
        this->listinn[i] = this->listinn[i - 1];
    this->listinn[saeti] = stak;
    this->fjoldi++;
    return true;
}

bool Dyragardur::skra_hund_aftast(int id, std::string nafn, int hlydnieinkunn) {
    if(this->fjoldi >= this->staerd)
        this->staekka_um(3);
    Dyr* hundur = new Hundur(id, nafn, hlydnieinkunn);
    if(this->setja_i_saeti(this->fjoldi, hundur) == false) {
        delete hundur;
        return false;
    }
    return true;
}

bool Dyragardur::skra_kott_aftast(int id, std::string nafn, std::string eigandi) {
    if(this->fjoldi >= this->staerd)
        this->staekka_um(3);
    Dyr* kottur = new Kottur(id, nafn, eigandi);
    if(this->setja_i_saeti(this->fjoldi, kottur) == false) {
        delete kottur;
        return false;
    }
    return true; 
}

// sá sem kallar á fallið er ábyrgur fyrir því að eyða dýrinu sem er fjarlægt
bool Dyragardur::fjarlaegja_eftir_id(int id, Dyr*& stak) {
    int idx = this->finna_dyr_med_id(id);
    if(idx == -1) return false;
    stak = this->listinn[idx];
    for(int i = idx; i < this->fjoldi - 1; i++)
        this->listinn[i] = this->listinn[i + 1];
    this->listinn[--this->fjoldi] = nullptr;
    return true;
}

Dyragardur::~Dyragardur() {
    for(int i = 0; i < this->fjoldi; i++)
        delete this->listinn[i];
    delete [] this->listinn;
}
