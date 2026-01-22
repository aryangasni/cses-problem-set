#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> list(n);
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }

    sort(list.begin(), list.end());

    int ans = 1;
    for(int i = 1; i < n; i++){
        if(list[i] != list[i-1]) ans++;
    }

    cout << ans << endl;

}