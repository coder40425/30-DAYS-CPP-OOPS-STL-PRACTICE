/* Day 3:
Implement a Pair Class Template (Templates, OOPs)
Write a template class MyPair<T1, T2> that stores two values. Add a function to print both values.
*Output Example:*
First: John
Second: 42 */


#include<iostream>
using namespace std;

template<class T1,class T2>
class MyPair{
    public:
    T1 data1;
    T2 data2;

    MyPair(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<"First: "<<this->data1<<endl<<"Second: "<<this->data2;
    }
};
int main(){
    MyPair <string,int> p("Yash",04);
    p.display();
    return 0;
}
