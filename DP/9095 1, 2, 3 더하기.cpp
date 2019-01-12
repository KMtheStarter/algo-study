#include <iostream>
using namespace std;

int dp[11];

// top-down 방식
int top_down(int n) {
	if (n == 0 || n == 1) return 1;
	if (n == 2) return 2;
	if (dp[n] > 0) return dp[n];
	dp[n] = top_down(n - 1) + top_down(n - 2) + top_down(n - 3);
	return dp[n];
}

// bottom-up 방식
void bottom_up() {
	dp[0] = 1;
	for (int i = 1; i <= 10; i++) {
		if (i - 1 >= 0) dp[i] += dp[i - 1];
		if (i - 2 >= 0) dp[i] += dp[i - 2];
		if (i - 3 >= 0) dp[i] += dp[i - 3];
	}
}

int main() {
	bottom_up();
	int cnt;
	cin >> cnt;
	while (cnt--) {
		int n;
		cin >> n;
		cout << dp[n] << "\n";
	}
}
