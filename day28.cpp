/* Day 28: Custom Hash Function in Unordered Map (Advanced STL)

Use unordered_map with a custom hash function for a custom class.

*Output Example:*
Element found: True*/


#include <iostream>
#include <unordered_map> // For unordered_map

using namespace std;

// Custom class representing a 2D Point
class Point {
public:
    int x, y;

    // Constructor to initialize x and y
    Point(int x, int y) : x(x), y(y) {}

    // Overloading the '==' operator to compare two Point objects
    bool operator==(const Point &other) const {
        return x == other.x && y == other.y;
    }
};

// Custom hash function for the Point class
struct HashFunction {
    size_t operator()(const Point &p) const {
        // Combine the hash of x and y in a unique way
        // std::hash<int>() gives hash for an int
        // Using XOR (^) and shift (<<) to mix the bits
        return hash<int>()(p.x) ^ (hash<int>()(p.y) << 1);
    }
};

int main() {
    // Declare unordered_map with:
    // - Key: Point (custom class)
    // - Value: string
    // - Custom HashFunction
    unordered_map<Point, string, HashFunction> pointMap;

    // Insert custom Point objects as keys with corresponding values
    pointMap[Point(1, 2)] = "A";
    pointMap[Point(3, 4)] = "B";
    pointMap[Point(5, 6)] = "C";

    // Create a Point key to search for
    Point key(3, 4);

    // Check if the key exists in the map using find()
    if (pointMap.find(key) != pointMap.end()) {
        cout << "Element found: True" << endl;
    } else {
        cout << "Element found: False" << endl;
    }

    return 0;
}
