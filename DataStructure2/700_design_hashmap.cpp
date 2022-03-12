//
//  700_design_hashmap.cpp
//  leetcode
//
//  Created by Lina Veltman on 04.03.2022.
//

#include <stdio.h>
#include <unordered_map>
#include <map>

using namespace std;


class MyHashMap {
public:
    MyHashMap() {}
    
    void put(int key, int value) {
        m[key] = value;
    }
    
    int get(int key) {
        if (m.find(key) == m.end())
            return -1;
        return m[key];
    }
    
    void remove(int key) {
        if (m.find(key) != m.end())
            m.erase(key);
    }
    
private:
    unordered_map<int, int> m;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */


//int main() {
//    int key = 5;
//    int value = 555;
//    MyHashMap* obj = new MyHashMap();
//    obj->put(key, value);
//    int param_2 = obj->get(key);
//    obj->remove(key);
//    return 0;
//}
