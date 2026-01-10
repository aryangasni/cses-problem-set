#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long maxi = max(y, x);
        long long maxiSquare = maxi * maxi;

        if (maxi % 2 == 0) {
            cout << (y >= x ? maxiSquare - x + 1 : maxiSquare - 2*x + 1 + y) << endl;
        } 
        else {
            cout << (x >= y ? maxiSquare - y + 1 : maxiSquare - 2*y + 1 + x ) << endl;
        }
    }

}