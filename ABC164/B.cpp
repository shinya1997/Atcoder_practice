#include <iostream>
using namespace std;

int main(){
    int A, B, C, D;
    int tun = 1;
    cin >> A >> B >> C >> D;
    while(A > 0 && C > 0)
    {
        if(tun % 2 == 1)
        {
            C -= B;
        }
        else
        {
            A -= D;
        }
        tun++;
    }
    if(tun % 2 == 0)
        cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
