#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<bool> visit;
vector<int> seq;
// 백트래킹 기법
void func(){
    int size = seq.size();
    if (size == M){
        // 뒤의 항보다 큰게 존재하면 출력안함
        for (int i = 0; i < M - 1; i++){
            if(seq[i] > seq[i + 1]){
                return;
            }

        }
        for (int i = 0; i < M; i++){
            cout << seq[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++){
        if(!visit[i]){
            visit[i] = true;
            seq.push_back(i);
            func();
            visit[i] = false;
            seq.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    visit = vector<bool>(N + 1, false);
    func();
    return 0;
}
