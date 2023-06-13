### [Maps-STL](https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=false)

## Explanation:
This is a C++ program that reads a series of queries from standard input and performs operations on a map data structure. Here are some key points about the code:

- The program defines a `map` named `stud_mark` that maps strings to integers. This map will store the marks of students, where the keys are student names and the values are their marks.
- The `main` function reads an integer `Q` from standard input, representing the number of queries to be performed.
- A loop is entered that runs for `Q` iterations. In each iteration, an integer `type` is read from standard input, representing the type of query to be performed.
- If `type` is 1, a string `X` and an integer `Y` are read from standard input. The program then checks if `X` is already present in the map. If it is, its value is incremented by `Y`. If it is not present in the map, a new key-value pair `(X,Y)` is inserted into the map.
- If `type` is 2, a string `X` is read from standard input. The value associated with key `X` in the map is then set to 0.
- If `type` is 3, a string `X` is read from standard input. The value associated with key `X` in the map is then printed to standard output.

In summary, this program reads a series of queries from standard input and performs operations on a map data structure that stores student marks. The operations include adding marks to a student, resetting a student's marks to 0, and printing a student's marks to standard output.

## Code:
```cpp
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

// Node structure for the doubly linked list
struct Node {
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val) : prev(p), next(n), key(k), value(val) {};
   Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val) {};
};

// Abstract base class Cache
class Cache {
protected: 
   map<int, Node*> mp; // map the key to the node in the linked list
   int cp;  // capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; // pure virtual set function
   virtual int get(int) = 0; // pure virtual get function
};

// Derived class LRUCache inheriting from Cache
class LRUCache : public Cache {
public:
   LRUCache(int capacity) {
      cp = capacity;
   }
   void set(int key, int value) {
      Node* newNode;
      if (mp.empty()) {
         newNode = new Node(key, value);
         tail = head = newNode;
         mp[key] = newNode;
         return;
      }
      auto it = mp.find(key);
      // If the desired key is present in the cache
      if (it != mp.end()) {
         it->second->value = value;

         // If the desired key is the head, we need not do any change
         if (head == it->second) {
            return;
         }
         // If the desired key is at the end (tail), then we remove the key from the list and later add it to the head
         else if (tail == it->second) {
            tail = tail->prev;
         }
         else {
            it->second->prev->next = it->second->next;
            it->second->next->prev = it->second->prev;
         }

         // Now add the desired key at the head
         it->second->next = head;
         head->prev = it->second;
         it->second->prev = NULL;
         head = it->second; 
      }
      // If the desired key is not present in the cache 
      else {
         // Add the new node at the start of the list
         newNode = new Node(head->prev, head, key, value);
         head->prev = newNode; 
         head = newNode;
         mp[key] = newNode;

         // After inserting the new node, if the size of the cache exceeds the capacity, we delete the last node (according to LRU algorithm)
         if (mp.size() > cp) {
            tail = tail->prev;
            mp.erase(tail->next->key);
            delete tail->next; 
            tail->next = NULL;
         }
      }
   }
   int get(int key) {
      auto iter = mp.find(key);
      if (iter != mp.end()) {
         return iter->second->value;
      }
      return -1;
   }
};

int main() {
   int n, capacity, i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for (i = 0; i < n; i++) {
      string command;
      cin >> command;
      if (command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if (command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key, value);
      }
   }
   return 0;
}

```
