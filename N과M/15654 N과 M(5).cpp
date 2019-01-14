#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> seq;
vector<int> list;
vector<bool> visit;
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
        if(!visit[i]){
            visit[i] = true;
            seq.push_back(list[i - 1]);
            func();
            visit[i] = false;
            seq.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    visit = vector<bool>(N + 1, false);
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        int n;
        cin >> n;
        list.push_back(n);
    }
    sort(list.begin(), list.end());
    func();
    return 0;
}
