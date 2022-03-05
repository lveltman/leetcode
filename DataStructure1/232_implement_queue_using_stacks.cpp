////
////  232_implement_queue_using_stacks.cpp
////  leetcode
////
////  Created by Lina Veltman on 25.02.2022.
////
//
#include <stdio.h>
#include <stack>

using namespace std;


class MyQueue {
public:
    stack<int> container;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> tmp;
        while (!container.empty()) {
            int top = container.top();
            container.pop();
            tmp.push(top);
        }
        container.push(x);
        while (!tmp.empty()) {
            int top = tmp.top();
            tmp.pop();
            container.push(top);
        }
    }
    
    int pop() {
        int top = container.top();
        container.pop();
        return top;
    }
    
    int peek() {
        int top = container.top();
        return top;
    }
    
    bool empty() {
        if (container.empty())
            return true;
        return false;
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

//int main() {
//    MyQueue* obj = new MyQueue();
//    obj->push(x);
//    int param_2 = obj->pop();
//    int param_3 = obj->peek();
//    bool param_4 = obj->empty();
//    return 0;
//}
