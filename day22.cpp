/* Day 22: Group Anagrams (STL - unordered_map)

Given words, group anagrams using unordered_map.

*Output Example:*
[aet]: eat, tea
[ant]: tan, nat              */

/*
##Approach:-
-For each word:
-Sort the characters in the word → get a key.
-Use unordered_map<string, vector<string>> where key is the sorted word.
-Append original word to the vector for that key.
-Finally, print all groups.                              */

// #include <bits/stdc++.h> includes most standard C++ headers (used here for convenience)
#include <bits/stdc++.h>
using namespace std;

void groupAnagrams(const vector<string>& words) {
    unordered_map<string, vector<string>> anagramGroups;

    for (const string& word : words) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        anagramGroups[sortedWord].push_back(word);
    }

    for (const auto& pair : anagramGroups) {
        const string& key = pair.first;
        const vector<string>& group = pair.second;

        cout << "[" << key << "]: ";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << group[i];
            if (i != group.size() - 1) cout << ", ";
        }
        cout << "\n";
    }
}

int main() {
    vector<string> words = {"eat", "tea", "tan", "nat"};
    groupAnagrams(words);
    return 0;
}
