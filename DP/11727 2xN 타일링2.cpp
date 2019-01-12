#include <iostream>
using namespace std;

int dp[1001];

// top-down 방식
int top_down(int n) {
	if (n == 0) return 1;
	if (n == 1) return 1; 
	if (dp[n] > 0) return dp[n];
	dp[n] = (top_down(n - 1) + top_down(n - 2) * 2) % 10007;
	return dp[n];
}

// bottom-up 방식
int bottom_up(int n) {
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << bottom_up(n);
}
