#include <iostream>
#include <algorithm>
using ll = long long;
using namespace std;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    ll C = A + B;
    ll ans = A * (N / C);
    ans += min(N % C, A);
    cout << ans << endl;
    return 0;
}
