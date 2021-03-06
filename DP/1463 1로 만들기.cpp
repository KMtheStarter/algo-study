#include <iostream>
using namespace std;

// 전역변수로 선언된 배열은 자동으로 0으로 초기화 되어있음
int dp[1000001];

// top-down 방식
int top_down(int n) {
	if (n == 1) return 0;
	if (dp[n] > 0) return dp[n];

	// 기본은 원래 항에서 1을 빼는 케이스로 가져감
	dp[n] = top_down(n - 1) + 1;

	if (n % 3 == 0) {
		int temp = dp[n / 3] + 1;
		if (temp < dp[n]) dp[n] = temp;
	}
	if (n % 2 == 0) {
		int temp = dp[n / 2] + 1;
		if (temp < dp[n]) dp[n] = temp;
	}
	return dp[n];
}

// bottom-up 방식
int bottom_up(int n) {
	if (n == 1) return 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			int temp = dp[i / 3] + 1;
			if (temp < dp[i]) dp[i] = temp;
		}
		if (i % 2 == 0) {
			int temp = dp[i / 2] + 1;
			if (temp < dp[i]) dp[i] = temp;
		}
	}
	return dp[n];
}
int main() {
	int n;
	cin >> n;
	cout << bottom_up(n);
	return 0;
}
