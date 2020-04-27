#include <iostream>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    string a[N];
    set<string> b;
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
        b.insert(a[i]);
    }
    cout << b.size() << endl;
}
