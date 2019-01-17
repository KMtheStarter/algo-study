#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> list(n+1);
    for (int i = 1; i <= n; i++)
        cin >> list[i];
    // dp를 -1로 초기화하고 조건문에서 dp[i] == -1 || dp[i] > dp[i - j] + list[j] 하는 방법도 
    vector<int> dp(n+1, INT16_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            dp[i] = min(dp[i], dp[i - j] + list[j]);
        }
    }

    cout << dp[n];
    return 0;
}
