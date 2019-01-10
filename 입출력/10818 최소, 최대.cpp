#include <iostream>
using namespace std;

int main(){
    int size;
    int n;
    int max = -1000001;
    int min = 1000001;
    cin >> size;
    while (size--){
        cin >> n;
        if (max < n) max = n;
        if (min > n) min = n;
    }
    cout << min << " " << max;
    return 0;
}
