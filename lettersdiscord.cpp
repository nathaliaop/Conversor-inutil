#include <bits/stdc++.h>

using namespace std;

void conversor(string s) {
    for (auto &c: s) {
        if (!isalpha(c)) {
            switch((int)c) {
                case ' ':
                    cout << "   ";
                    break;
                case '!':
                    cout << ":l_exclamation:";
                    break;
                case '?':
                    cout << ":l_question:";
                    break;
                case '<':
                    if (*(&c) == '<')
                        cout << ":l_heart:";
                    break;
            } continue;
        }
        
        //c = (char)tolower(c);
        //cout << (int)c << endl;
        
        cout << ":letter" << setfill('0') << setw (2) << 26 - (int(c) - 97) << (char)toupper(c) << ":";
    }
    cout << endl;
}

int main() {
    string input;
    
    while (getline(cin, input))
        conversor(input);
    
}