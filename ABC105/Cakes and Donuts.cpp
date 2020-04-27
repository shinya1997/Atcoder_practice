#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A_max = N / 4;
    int B_max = N / 7;
    for(int A = 0; A <= A_max; A++)
    {
        for(int B = 0; B <= B_max; B++)
        {
            if(N == 4 * A + 7 * B)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
