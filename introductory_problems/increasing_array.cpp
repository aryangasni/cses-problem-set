#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    long long moves = 0;
    int prev;
    cin >> prev;

    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        if(x < prev){
            moves += prev - x;
        } else prev = x;
    }
    cout << moves << endl;

}