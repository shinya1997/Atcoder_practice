#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for(int i = 0; i < S.size() - 3; i++)
    {
        for(int j = i + 3; j < S.size(); j++)
        {
            int ans = 0;
            for(int k = i; k < j; k++)
            {
                ans = 10 * ans + S[k];
            }
            cout << ans << endl;
        }
    }
    return 0;
}
