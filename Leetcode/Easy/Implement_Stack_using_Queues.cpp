// Problem name : Implement Stack using Queues
// URL : https://leetcode.com/explore/learn/card/queue-stack/239/conclusion/1387/
// Date : Sun Dec 1 2024
class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    void push(int x) {
        q2.push(x); 
        while (!q1.empty()) {
            q2.push(q1.front()); 
            q1.pop();
        }
        swap(q1, q2); 
    }
    int pop() {
        int top = q1.front(); 
        q1.pop(); 
        return top;
    }
    int top() {
        if (q1.empty()) throw runtime_error("Stack is empty");
        return q1.front();
    }
    bool empty() {
        return q1.empty();
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
