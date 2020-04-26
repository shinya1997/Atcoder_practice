#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    double Pi = 3.141592653589793238;
    cin >> R;
    cout << fixed << setprecision(20) << 2 * R * Pi << endl;
    return 0;
}
