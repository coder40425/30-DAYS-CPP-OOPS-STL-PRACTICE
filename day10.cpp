/* Day 10: Word Frequency Counter (STL - map, string manipulation)

Take a sentence and use a map to count frequency of each word.

*Output Example:*
Hello: 2
World: 1                                                            */


#include<iostream>
#include<vector>
#include<map>
#include<sstream>     //for stringstream
using namespace std;

 void frequencyCounter(string s){
    map<string, int> freq;
    stringstream ss(s);
    string word;
    
    while(ss >> word){
      freq[word]++;
    }
        // display word frequencies
    for(auto pair: freq){
    cout<<pair.first<<": "<<pair.second<<endl;
    }
  }
  
int main(){
    string sentence= "HELLO HELLO WORLD";
    frequencyCounter(sentence);
  
    return 0;
}
