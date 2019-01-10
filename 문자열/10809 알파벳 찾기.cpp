#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;

    for (int i = 'a'; i <= 'z'; i++){
        auto itr = find(S.begin(), S.end(), i);
        if (itr == S.end()) cout << -1 << ' ';
        else cout << itr - S.begin() << ' '; 
    }
    return 0;
}
