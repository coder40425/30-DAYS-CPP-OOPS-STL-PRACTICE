/* Day 9: Basic Vector Operations using class (STL - vector)
Perform vector operations: push, pop, insert at index, and print vector elements.

*Output Example:*
Vector: 10 20 15 30                                          */


#include<iostream>
#include<vector>
using namespace std;

class Vector{
    private:
       vector<int> vec;
    public:
       void push(int val){
        vec.push_back(val);
       }
       void pop(){
        if(!vec.empty()){
            vec.pop_back();
        }
        else{
            cout<<"vector is empty, cannot pop"<<endl;
        }
       }
       void insertAt(int index,int val){
        if(index>=0 && index<=vec.size()){
            vec.insert(vec.begin()+index,val);
        }
        else{
            cout<<"invalid index"<<endl;
        }
       }

       void print(){
        cout<<"Vector: "<<endl;
        for(int val: vec){
            cout<<val<<" ";
        }
            cout<<endl;
       }
};

int main(){
    Vector v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);     // Vector: 10 20 30 40

    v.insertAt(2,25);  //insert 25 at index 2, so Vector: 10 20 25 30 40
    v.print();

    v.pop();      //will pop out the last element i.e. 40, so Vector: 10 20 25 30
    v.print();

    return 0;
}
