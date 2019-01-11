#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string S;
	vector<string> list;
	cin >> S;
	int size = S.size();
	for (int i = 0; i < size; i++) {
		list.push_back(S.substr(i, size));
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < size; i++) {
		cout << list[i] << "\n";
	}
}
