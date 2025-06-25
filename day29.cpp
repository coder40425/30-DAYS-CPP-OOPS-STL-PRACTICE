/* Day 29: LRU Cache using List and Map (STL - list, map)

Implement LRU cache with get/put using list+map.

*Output Example:*
Accessed: 3
Evicted: 1      */

#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class LRUCache {
    int capacity;
    list<int> lruList; // front = most recently used
    unordered_map<int, pair<int, list<int>::iterator>> cache; // key -> {value, position in list}

public:
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (cache.find(key) == cache.end())
            return -1;

        // Move key to front (most recently used)
        lruList.erase(cache[key].second);
        lruList.push_front(key);
        cache[key].second = lruList.begin();

        cout << "Accessed: " << key << endl;
        return cache[key].first;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            // Key exists: update value and move to front
            lruList.erase(cache[key].second);
        } else if (cache.size() == capacity) {
            // Evict least recently used (back of the list)
            int lruKey = lruList.back();
            lruList.pop_back();
            cache.erase(lruKey);
            cout << "Evicted: " << lruKey << endl;
        }

        // Insert new key at front
        lruList.push_front(key);
        cache[key] = {value, lruList.begin()};
    }
};

int main() {
    LRUCache lru(2); // Capacity: 2

    lru.put(1, 10);
    lru.put(2, 20);
    lru.get(1);       // Accessed: 1
    lru.put(3, 30);   // Evicted: 2
    lru.get(2);       // Not accessed (miss)
    lru.get(3);       // Accessed: 3
    lru.put(4, 40);   // Evicted: 1
    lru.get(1);       // Miss
    lru.get(3);       // Accessed: 3
    lru.get(4);       // Accessed: 4

    return 0;
}
