/* Day 8: Sort Students by Marks using Vector of Objects (STL - sort, custom comparator)

 Create a Student class with name and marks. Store multiple objects in a vector and sort by marks.

*Output Example:*
Alice: 95
Bob: 90
John: 88                   */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) : name(n), marks(m) {}        //Constructor- (to allow easy and readable creation of Student objects directly with name and marks values & to avoid manual assignment)

    // Static comparator
    static bool compare(Student &a, Student &b) {
        return a.marks > b.marks; // Descending
    }
};

int main() {
    vector<Student> students = {
        Student("Bob", 90),
        Student("John", 88),
        Student("Alice", 95)
    };

    sort(students.begin(), students.end(), Student::compare);    //compare is a static class function

    for (auto &s : students) {
        cout << s.name << ": " << s.marks << endl;
    }

    return 0;
}
