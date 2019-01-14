#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> seq;

// 백트래킹 기법
void func() {
    int size = seq.size();
    if (size == M) {
        for (int i = 0; i < M; i++) {
            cout << seq[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
        seq.push_back(i);
        func();
        seq.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    func();
    return 0;
}
