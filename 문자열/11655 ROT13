#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    char ROT[100] = "";
    getline(cin, S);
    int size = S.size();

    for (int i = 0; i < size; i++){
        if (S[i] >= 'a' && S[i] <= 'm') ROT[i] = S[i] + 13;
        else if (S[i] >= 'n' && S[i] <= 'z') ROT[i] = S[i] - 13;
        else if (S[i] >= 'A' && S[i] <= 'M') ROT[i] = S[i] + 13;
        else if (S[i] >= 'N' && S[i] <= 'Z') ROT[i] = S[i] - 13;
        else ROT[i] = S[i];
    }
    for (int i = 0; i < size; i++){
        cout << ROT[i];
    }

    return 0;
}
