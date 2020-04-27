#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    int cnt = 0;
    cin >> N >> S;
    for(int i = 0; i < N; i++)
    {
        if(S[i] == 'A')
        {
            if(S[i + 1] == 'B')
            {
                if(S[i+ 2] == 'C')
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
}
