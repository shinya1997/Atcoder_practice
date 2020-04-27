#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    vector<int> V;
    for(int i = 1; i <= min(A, B); i++)
    {
        if(A % i == 0 && B % i == 0)
            V.push_back(i);
    }
    int n = V.size();
    cout << V[n - K] << endl;
    return 0;
}
