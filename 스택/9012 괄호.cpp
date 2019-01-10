#include <iostream>
#include <string>
using namespace std;

string vps(string s){
    int len = s.size();
    int n = 0;
        for (int i = 0; i < len; i++){
            if (s[i] == '(') n++;
            else n--;
            if (n < 0) return "NO";
        }
        if (n == 0) return "YES";
        else return "NO";
}

int main(){
    int size;
    string s;
    cin >> size;
    while(size--){
        cin >> s;
        cout << vps(s) << "\n";
    }
}
