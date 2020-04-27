#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int C = A + B;
    if(C % 2 == 0)
        cout << C / 2 << endl;
    else
        cout << "IMPOSSIBLE" << endl;
    return 0;
}
