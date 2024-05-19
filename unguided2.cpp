#include <iostream>
#include <stack>
#include <string>


//Titanio Francy Naddiansa
//2311102289
//IF-11-H


using namespace std;

int main() {
    stack<char> s;
    string kalimat, hasil;

    cout << "Masukkan Kata (input/kalimat): ";
    getline(cin, kalimat);

    for (char c : kalimat) {
        s.push(c);
    }

    while (!s.empty()) {
        hasil += s.top();
        s.pop();
    }

    cout << "Datastack Array :" << endl;
    cout << "Data : " << kalimat << endl;
    cout << "Hasil: " << hasil << endl;

    return 0;
}