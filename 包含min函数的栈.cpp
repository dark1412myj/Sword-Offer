class Solution {
public:
    stack<int> sta1;
    stack<int> sta2;
    void push(int value) {
        sta1.push(value);
        if(sta2.empty()||value<sta2.top())
            sta2.push(value);
        else
            sta2.push(sta2.top());
    }
    void pop() {
        sta1.pop();
        sta2.pop();
    }
    int top() {
        return sta1.top();
    }
    int min() {
        return sta2.top();
    }
};