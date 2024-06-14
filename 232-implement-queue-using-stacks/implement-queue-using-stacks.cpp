class MyQueue {
private:
    stack<int> stack1;
    stack<int> stack2;

    // Helper function to transfer elements from stack1 to stack2
    void transferStack1ToStack2() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        if (stack2.empty()) {
            transferStack1ToStack2();
        }
        int topElement = stack2.top();
        stack2.pop();
        return topElement;
    }
    
    int peek() {
        if (stack2.empty()) {
            transferStack1ToStack2();
        }
        return stack2.top();
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */