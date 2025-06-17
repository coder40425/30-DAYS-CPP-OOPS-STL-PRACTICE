/* Day 17: Remove Duplicates using Set (STL - set, vector)

Given a vector with duplicates, remove them using set.

*Output Example:*
Unique elements: 1 2 3 4          */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    // Sample vector with duplicate elements
    vector<int> nums = {1, 2, 3, 2, 4, 1, 3};

    // Use set to store only unique elements (set stores in sorted and unique manner)
    set<int> uniqueSet(nums.begin(), nums.end());

    // Output the unique elements
    cout << "Unique elements: ";
    for (int val : uniqueSet) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
