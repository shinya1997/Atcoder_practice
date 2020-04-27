#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int k = 0;
    for(int i = 0; i < N; i++) {
        if(a[i] != i + 1)
            k++;
    }
    if(k == 0 || k == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
