### [Abstract Classes - Polymorphism](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem?isFullScreen=false)

## Explanation:
This is a C++ program that implements an LRU (Least Recently Used) Cache using a hash table and a doubly-linked list. Here are some key points about the code:

- The program defines a `Node` structure for the doubly-linked list. Each node has pointers to the previous and next nodes, as well as a key-value pair.
- The program also defines an abstract base class named `Cache` with two pure virtual methods: `set` and `get`. The class also has several protected member variables: a hash table (`mp`) that maps keys to nodes in the linked list, an integer (`cp`) representing the capacity of the cache, and two pointers (`tail` and `head`) to the tail and head of the doubly-linked list, respectively.
- The `LRUCache` class is derived from the `Cache` class and overrides its `set` and `get` methods. The class also has a constructor that takes an integer argument representing the capacity of the cache.
- The `set` method takes two arguments: a key and a value. If the key is already present in the cache, its value is updated and the corresponding node is moved to the head of the list (since it was most recently used). If the key is not present in the cache, a new node is created and added to the head of the list. If the size of the cache exceeds its capacity after adding the new node, the least recently used node (i.e., the one at the tail of the list) is removed from both the list and the hash table.
- The `get` method takes a key as an argument and returns its corresponding value if it is present in the cache. If the key is not present in the cache, it returns -1.
- In the `main` function, two integers `n` and `capacity` are read from standard input. An object of type `LRUCache` with capacity equal to `capacity` is then created. A loop is entered that runs for `n` iterations. In each iteration, a command is read from standard input. If the command is "get", a key is read from standard input and passed as an argument to the `get` method of the cache object. The result is printed to standard output. If the command is "set", a key-value pair is read from standard input and passed as arguments to the `set` method of the cache object.

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
