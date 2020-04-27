#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < S.size(); i++)
    {
        int k = i;
        while(S[k] == 'A' || S[k] == 'C'|| S[k] == 'G' || S[k] == 'T')
            k++;
        ans = max(ans, k - i);
    }
    cout << ans << endl;
}
