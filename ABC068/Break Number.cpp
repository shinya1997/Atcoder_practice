#include <iostream>
using namespace std;

int main() {
    int N;
    int ans = -1;
    int max = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        int cnt = 0;
        int tmp = i;
        while(tmp % 2 == 0)
        {
            cnt++;
            tmp /= 2;
        }
        if(cnt >= max)
        {
            max = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
