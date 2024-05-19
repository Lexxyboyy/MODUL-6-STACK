#include <iostream>
#include <stack>
#include <string>


//aryo tegar sukarno
//2311102018
//IF-11-A



using namespace std;

bool cekPalindrom(const string& kalimat) {
    stack<char> tumpukan;
    
    for (char ch : kalimat) {
        if (ch != ' ') {
            tumpukan.push(tolower(ch));
        }
    }

    for (char ch : kalimat) {
        if (ch != ' ') {
            if (tumpukan.top() != tolower(ch)) {
                return false;
            }
            tumpukan.pop();
        }
    }
    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    if (cekPalindrom(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom\n";
    } else {
        cout << "Kalimat tersebut bukan palindrom\n";
    }

    return 0;
}