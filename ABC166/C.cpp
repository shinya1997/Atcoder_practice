#include <iostream>
using namespace std;
#define ll long long
static const int MAX = 200000;

pair<ll, ll> a[100009];

int main() {
    ll N, M;
    ll cnt = 0;
    cin >> N >> M;
    ll altitude[MAX];
    ll tower[MAX];
    for(int i = 0; i < N; i++)
        tower[i] = 0;
    for(int i = 0; i < N; i++)
        cin >> altitude[i];
    for(int i = 0; i < M; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }
    for(int i = 0; i < M; i++)
    {
        if(altitude[a[i].first - 1] <= altitude[a[i].second - 1])
            tower[a[i].first - 1]++;
        if(altitude[a[i].first - 1] >= altitude[a[i].second - 1])
            tower[a[i].second - 1]++;
    }
    for(int i = 0; i < N; i++)
    {
        if(tower[i] == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
