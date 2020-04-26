#include <iostream>
using namespace std;

int main() {
    string S;
    bool alpha[26];
    cin >> S;
    for(int i = 0; i < 26; i++)
        alpha[i] = false;
    for(int i = 0; i < S.size(); i++)
        alpha[S[i] - 'a'] = true;
    for(int i = 0; i < 26; i++) {
        if(!alpha[i])
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
