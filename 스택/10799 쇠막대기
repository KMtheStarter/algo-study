#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<char> S;
    string cmd;
    int cnt = 0;
    cin >> cmd;
    int size = cmd.size();
    for (int i = 0; i < size; i++) {
        if (cmd[i] == '(') S.push(cmd[i]);
        else {
            if (cmd[i - 1] == '(') {
                S.pop();
                cnt += S.size();
            } else {
                S.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
