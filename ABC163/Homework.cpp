#include <iostream>
using namespace std;

int main() {
    int N, M;
    int sum = 0;
    cin >> N >> M;
    int a[M];
    for(int i = 0; i < M; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(N - sum >= 0)
        cout << N - sum << endl;
    else
        cout << -1 << endl;
    return 0;
}
