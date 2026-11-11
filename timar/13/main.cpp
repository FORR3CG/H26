#include <iostream>
#include <string>

using namespace std;

int main() {
    // allt um strengi: http://www.cplusplus.com/reference/string/string/
/*     char* texti = "abc"; // => "abc\0" => ['a', 'b', 'c', '\0']
    texti.append("def");
    texti += "def"; */
    // string geymt á heap
    string texti = "abc";
    string texti2("abc");
    texti.append("def");
    texti2 += "def";
    double pi = 3.14;
    texti += pi;
    cout << "+ double: " << texti << endl;
    texti += to_string(pi);
    cout << "+ to_string(double) " << texti << endl;
    cout << "lengd: " << texti.length() << ", cap: " << texti.capacity() << endl;
    texti = string("abc") + "def";
    texti = texti2 + "def";
    if(texti < texti2) cout << "texti er minni en texti 2" << endl;
    int samanburdur = texti.compare(texti2); // 0 ef eins, -1 ef fyrri minni og 1 fyrri stærri
    
    return 0;
}