#include <iostream>
using namespace std;

int main() {
    
    long long int n;
    cin >> n;
    long long totalSum = n * (n+1) / 2;
    long long actualSum = 0;

    for(int i = 0; i < n-1; i++){
        int num;
        cin >> num;
        actualSum += num;
    }
    cout << totalSum - actualSum << endl;

    return 0;

}