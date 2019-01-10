#include <iostream>
using namespace std;

int main(){
    int n;
    int cnt = 1;
    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;
        cout << "Case #" << cnt++ << ": " << x + y << "\n";
    }

    return 0;
}
