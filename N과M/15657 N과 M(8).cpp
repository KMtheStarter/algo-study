#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> seq;
vector<int> list;

// 백트래킹 기법
void func() {
    int size = seq.size();
    if (size == M) {
        for (int i = 0; i < M - 1; i++){
            if(seq[i] > seq[i + 1])
                return;
        }
        for (int i = 0; i < M; i++) {
            cout << seq[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
        seq.push_back(list[i - 1]);
        func();
        seq.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        list.push_back(n);
    }
    sort(list.begin(), list.end());
    func();
    return 0;
}
