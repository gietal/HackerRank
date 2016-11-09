#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
    //Write your code here
    public:

    void pushCharacter(char c) {
        m_stack.push(c);
    }
    
    void enqueueCharacter(char c) {
        m_queue.push(c);
    }
    
    char popCharacter() {
        char c = m_stack.top();
        m_stack.pop();
        return c;
    }
    
    char dequeueCharacter() {
        char c = m_queue.front();
        m_queue.pop();
        return c;
    }
    
    private:
    stack<char> m_stack;
    queue<char> m_queue;
};
