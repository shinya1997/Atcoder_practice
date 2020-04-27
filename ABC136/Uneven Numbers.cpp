#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int cnt = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        string s = to_string(i);
        if(s.size() == 1 || s.size() == 3 || s.size() == 5)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
