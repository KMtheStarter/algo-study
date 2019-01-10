#include <iostream>
#include <string>
using namespace std;

struct Stack{
    int data[10000] = {0};
    int index = 0;
    void push(int n){
        data[index++] = n;
    }
    int size(){
        return index;
    }
    bool empty(){
        if (index == 0) return true;
        else return false;
    }
    int top(){
        if (index == 0) return -1;
        else return data[index - 1];
    }
    int pop(){
        if (empty() == true) return -1;
        else {
            return data[--index];
        }
    }
};
int main(){
    int size;
    int n;
    string cmd;
    Stack s;
    cin >> size;
    while(size--){
        cin >> cmd;
        if(cmd == "push"){
            cin >> n;
            s.push(n);
        }
        else if(cmd == "pop") cout << s.pop() << '\n';
        else if(cmd == "size") cout << s.size() << '\n';
        else if(cmd == "top") cout << s.top() << '\n';
        else if(cmd == "empty") cout << s.empty() << '\n';
        else return -1;
    }
    return 0;
}
