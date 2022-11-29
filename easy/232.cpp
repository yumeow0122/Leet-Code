#include <bits/stdc++.h>

using namespace std;

class MyQueue {
    stack<int> stk;
public:
    MyQueue() {
    }
    
    void push(int x) {
        _push(x);
    }
    
    int pop() {
        int val = stk.top();
        stk.pop();
        return val;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
    }

private:
    void _push(int x){
        if(stk.empty()){
            stk.push(x);
            return;
        }

        int val = stk.top(); stk.pop();
        _push(x);
        stk.push(val);
    }
};


int main(){
    MyQueue que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);

    cout << que.pop() << endl;
    cout << que.pop() << endl;
    cout << que.pop() << endl;
    cout << que.pop() << endl;
    cout << que.pop() << endl;

}