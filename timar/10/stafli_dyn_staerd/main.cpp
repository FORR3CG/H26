#include "stafli.hpp"

int main() {
    Stafli s = Stafli();
    for(int i = 0; i < 1000; i++) {
        s.push((i + 1) * 10);
    }
    // s.prenta();
    return 0;
}
