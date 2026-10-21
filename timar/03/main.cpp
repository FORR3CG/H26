#include <iostream>
#include <string>

using namespace std;

int main() {
    // lesa frá notanda
    /* Multiline komment
    int heiltala;
    float kommutala;
    cout << "Sláðu inn tölur: ";
    cin >> heiltala >> kommutala;
    cout << "Þú slóst inn: " << heiltala << " - " << kommutala << endl;
    */

    int a = 10, b = 20;

    if (a == 10) {
        cout << "a er tíu" << endl;
    } else if(a == 5 && b == 7) { // and -> &&, or -> ||, not => !
        cout << "a er 5 og b er 7" << endl;
    } else {
        cout << "a er eitthvað annað" << endl;
    }

    if (a == 10) { 
        cout << "a er tíu" << endl;
        cout << "önnur lína" << endl;
    }
    else if(a == 5 && b == 7)  // and -> &&, or -> ||, not => !
        cout << "a er 5 og b er 7" << endl;
    else 
        cout << "a er eitthvað annað" << endl;
    
    switch (a) { // vinnur bara með heiltölur
        case 1:
            cout << "a er einn" << endl;
            break;
        case 7:
            cout << "a er sjö" << endl;
            break;
        default:
            cout << "a er eitthvað annað" << endl;
    }

    // ternary operator
    int klukkan = 20;
    if (klukkan <= 18) cout << "góðan dag" << endl; else cout << "gott kvöld" << endl;
    string kvedja = (klukkan <= 18) ? "góðan dag" : "gott kvöld";
    cout << ((klukkan <= 18) ? "góðan dag" : "gott kvöld") << endl;

    // lykkjur
    // while - alveg eins og í python
    int i = 0;
    while(i < 5) { // while(true)
        cout << i << endl;
        i++;
        // break og continue alveg eins og í python
    }

    // do - while: keyrir alltaf að minnsta kosti einu sinni
    int k = 5; 
    do {
        cout << k << endl;
        k--;
    } while(k > 0);

    cout << "for með i++" << endl;
    for(int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    
    cout << "for með ++i" << endl;
    for(int i = 0; i < 5; ++i) {
        cout << i << endl;
    }

    int r = 5;
    int s = 0;
    // int r = 5, s = 0;
    while(r > 0 && s < 5) {
        cout << "r: " << r << ", s: " << s << endl;
        r--;
        s++;
    }
    
    for(int r = 5, s = 0; r > 0 && s < 5; r--, s++) {
        cout << "r: " << r << ", s: " << s << endl;
    }
    
    int g = 1000;
    int h;
    for(int g = 0; g < 10; g += 3) { // g = g + 3
        cout << g << endl;
        h += g;
    }
    g = h;
    cout << g << endl;

    int j = 0;
    for(j = -3;j < 5; j++) {
        cout << j << endl;
    }
    cout << "j (utan): " << j << endl;

    // for(;;) { } endalaus lykkja með for

    return 0;
}