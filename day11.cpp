/* Day 11: Implement Stack using STL (STL - stack, class wrapper)

Wrap STL stack inside a class MyStack. Add push, pop, and top functions.

*Output Example:*
Top: 5                                                                        */


#include<iostream>
#include<stack>
using namespace std;

class MyStack{
    private:
     stack<int> s;
     public: 
       void push(int val){
        s.push(val);
       }
       void pop(){
        if(!s.empty()){
            cout<<s.top()<<" is popped out from the stack"<<endl;
            s.pop();
        }
        else{
            cout<<"cannot pop, stack is empty !"<<endl;
        }
       }
       void top(){
        if(!s.empty()){
        cout<<"The topmost element of the stack is: "<<s.top()<<endl;
       }
       else{
        cout<<"Stack is empty !"<<endl;
       }
    }
    void print(){
        stack<int> temp = s;             //to print the stack, we need to copy it into a temporary stack and then pop each element
        cout<<"Stack: "<<endl;                //as because stack follows LIFO.
        while(!temp.empty()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
       }
    
};

int main(){
    MyStack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.print();

    s1.pop();
    s1.print();
    s1.top();

    return 0;
}

/*
OUTPUT:-
Stack: 
50 40 30 20 10 
50 is popped out from the stack
Stack: 
40 30 20 10 
The topmost element of the stack is: 40
                                                                                          */
