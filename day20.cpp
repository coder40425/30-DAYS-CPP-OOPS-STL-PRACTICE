/* Day 20: Queue using Two Stacks (STL - stack, logic)

Implement queue functions enqueue, dequeue using two stacks.

*Output Example:*
Front: 10                 */

#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    // Enqueue operation (O(1))
    void enqueue(int x) {
        s1.push(x);
    }

    // Dequeue operation (O(n))
    void dequeue() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        // Move all from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Remove front (top of s2)
        s2.pop();

        // Move everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Get front element
    void front() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        // Move all to s2 to access front
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        cout << "Front: " << s2.top() << endl;

        // Move back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    bool isEmpty() {
        return s1.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.front();     // Output: Front: 10

    q.dequeue();   // Removes 10

    q.front();     // Output: Front: 20

    return 0;
}
