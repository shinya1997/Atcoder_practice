#include <iostream>
using namespace std;

int main() {
    int N, K;
    int cnt = 0;
    cin >> N >> K;
    int array[N];
    for(int i = 0; i < N; i++)
        array[i] = 0;
    for(int i = 0; i < K; i++)
    {
        int n = 0;
        cin >> n;
        int a;
        for(int j = 0; j < n; j++)
        {
            cin >> a;
            array[a - 1]++;
        }
    }
    for(int i = 0; i < N; i++)
    {
        if(array[i] == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
