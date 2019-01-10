#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    //소문자, 대문자, 숫자, 공백
    string S;
    while (getline(cin, S)){
        int lower = 0;
        int upper = 0;
        int num = 0;
        int space = 0;
        int size = S.size();
        for (int i = 0; i < size; i++){
            if (S[i] >= 'a' && S[i] <= 'z') lower++;
            else if (S[i] >= 'A' && S[i] <= 'Z') upper++;
            else if (S[i] >= '0' && S[i] <= '9') num++;
            else if (S[i] == ' ') space++;
        }
        cout << lower << " " << upper << " " << num << " " << space << "\n";
    }
    return 0;
}
