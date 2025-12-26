#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;
    int ans = 1;
    int count = 1;

    for(int i = 0; i < s.size()-1; i++){
        if(s[i] != s[i+1]){
            count = 0;
        }
        count++;
        ans = max(ans, count);
    }
    cout << ans << endl;
    
    return 0;

}