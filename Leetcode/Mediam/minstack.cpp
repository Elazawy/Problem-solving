#include<iostream>
#include<stack>
using namespace std;
class MinStack {
private:
    stack<int> data;
    stack<int> minstack;
public:
    MinStack() {
        
    }
    void push(int val) {
        data.push(val);
        if(minstack.empty() || val <= minstack.top())
            minstack.push(val);
    }
    void pop(){
        if(data.top() == minstack.top()) minstack.pop();
        data.pop();
    }
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
