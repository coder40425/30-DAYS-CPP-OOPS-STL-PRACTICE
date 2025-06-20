/* Day 23: Implement a Vector Template (OOPs + Templates)

Write a simple template class MyVector<T> with push and print.

*Output Example:*
1 2 3 4           */


// #include <bits/stdc++.h> includes most standard C++ headers (used here for convenience)
#include <bits/stdc++.h>
using namespace std;

// Template class for a simple vector-like container
template <typename T>
class MyVector {
private:
    T* arr;           // Pointer to dynamic array
    int capacity;     // Total allocated size
    int size;         // Current number of elements

public:
    // Constructor
    MyVector() {
        capacity = 4;             // Initial capacity
        size = 0;
        arr = new T[capacity];    // Allocate array
    }

    // Push element to vector
    void push(T value) {
        // Resize if array is full
        if (size == capacity) {
            capacity *= 2;
            T* newArr = new T[capacity];

            // Copy elements to new array
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }

            delete[] arr;  // Free old memory
            arr = newArr;  // Point to new array
        }

        arr[size++] = value;
    }

    // Print all elements
    void print() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free memory
    ~MyVector() {
        delete[] arr;
    }
};

// Driver code
int main() {
    MyVector<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);

    v.print();  // Output: 1 2 3 4

    return 0;
}
