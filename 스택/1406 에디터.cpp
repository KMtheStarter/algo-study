#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<char> S1, S2;
    string str;
    int n;
    char cmd, letter;

    cin >> str;
    int size = str.size();
    for (int i = 0; i < size; i++) {
        S1.push(str[i]);
    }

    cin >> n;
    while (n--) {
        cin >> cmd;
        if (cmd == 'P') {
            cin >> letter;
            S1.push(letter);
        }
        else if (cmd == 'B'){
            if (!S1.empty()){
                S1.pop();
            } else continue;
        }
        else if (cmd == 'L') {
            if (!S1.empty()) {
                S2.push(S1.top());
                S1.pop();
            } else continue;
        } else if (cmd == 'D') {
            if (!S2.empty()) {
                S1.push(S2.top());
                S2.pop();
            } else continue;
        }
    }
    size = S1.size();
    for (int i = 0; i < size; i++){
        S2.push(S1.top());
        S1.pop();
    }
    size = S2.size();
    for (int i = 0; i < size; i++){
        cout << S2.top();
        S2.pop();
    }

    return 0;
}
