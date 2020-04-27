#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt2 = 0;
    cin >> N;
    for(int i = 1; i <= N; i+=2)
    {
        int cnt1 = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                cnt1++;
        }
        if(cnt1 == 8)
            cnt2++;
    }
    cout << cnt2 << endl;
    return 0;
}
