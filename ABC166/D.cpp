#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;
    for(int A = -100; A < 10000; A++)
    {
        for(int B = -100; B < 10000; B++)
        {
            if(pow(A, 5) - pow(B, 5) == X)
            {
                cout << B << " " << A << endl;
                return 0;
            }
        }
    }
    return 0;
}
