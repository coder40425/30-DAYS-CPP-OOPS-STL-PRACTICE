/* Day 16: Task Scheduler with Priority Queue (STL - priority_queue, pair)

Store tasks with priority using priority_queue. Print tasks in priority order.

*Output Example:*
Task3 (Priority 5)
Task1 (Priority 3)                      */


#include<iostream>
#include<queue>    // for priority_queue
#include<vector>   // for vector
#include<string>
using namespace std;

int main() {
    // Define a max-heap priority queue where each element is a pair: <priority, task_name>
    priority_queue<pair<int, string>> tasks;

    // Pushing tasks with their priorities
    tasks.push({5, "Task3"});
    tasks.push({3, "Task1"});
    tasks.push({1, "Task2"});

    // Printing tasks in order of priority (highest first)
    while(!tasks.empty()) {
        pair<int, string> current = tasks.top();
        cout << current.second << " (Priority " << current.first << ")" << endl;
        tasks.pop();
    }

    return 0;
}
