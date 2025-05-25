/* Day 4: Custom Comparator for Sorting Pairs (STL - pair, vector, sort)
Given a vector of pairs of (int, int), sort them by second value descending. Use a custom
comparator.
*Output Example:*
(2, 90) (1, 85) (3, 80)   */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator
bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second > p2.second){                //to sort by second value in descending order
        return true;
    }
    else{
        return false;
   }
}

int main() {
    vector<pair<int, int>> v = {{1, 85}, {2, 90}, {3, 80}};

    // Sorting using custom comparator
    sort(v.begin(), v.end(), comparator);

    // Output
    for (auto p : v) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
