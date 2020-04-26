#include <iostream>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int cnt = 0;
    cin >> N;
    string a[N];
    set<string> b;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for(int i = 0; i < N; i++)
    {
        if(find(b.begin(), b.end(), a[i]) == b.end())
        {
            b.insert(a[i]);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
