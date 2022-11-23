#include <bits/stdc++.h>

using namespace std;

class MyStack{
    queue<int> que;
public:
    MyStack(){

    }

	void push(int x) {
		que.push(x);
		for(int i=0;i<que.size()-1;++i){
			que.push(que.front());
			que.pop();
		}
	}

    int pop(){
        int val = this->top();
        que.pop();
        return val;
    }

    int top(){
        return que.front();
    }

    bool empty(){
        return que.empty();
    }
};

int main(){
    MyStack *mstk = new MyStack();

    cout << mstk->empty();

    return 0;
}
