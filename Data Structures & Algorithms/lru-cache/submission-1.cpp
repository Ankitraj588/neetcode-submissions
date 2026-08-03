#include <unordered_map>
using namespace std;

struct Node {
    int key, val;
    Node* prev;
    Node* next;
    
    Node(int k = 0, int v = 0) : key(k), val(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
private:
    int cap;
    unordered_map<int, Node*> mp;
    Node* head; // Dummy head
    Node* tail; // Dummy tail

    // Helper: Remove node from doubly linked list
    void removeNode(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    // Helper: Add node right after head (Most Recently Used position)
    void addHead(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    // Helper: Move existing node to head (Mark as Most Recently Used)
    void moveToHead(Node* node) {
        removeNode(node);
        addHead(node);
    }

public:
    LRUCache(int capacity) {
        cap = capacity;
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;
        
        Node* node = mp[key];
        moveToHead(node); // Accessing key makes it Most Recently Used
        return node->val;
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            // Key exists: update value and move to head
            Node* node = mp[key];
            node->val = value;
            moveToHead(node);
        } else {
            // New Key: check capacity
            if (mp.size() == cap) {
                // Evict LRU node (just before dummy tail)
                Node* lru = tail->prev;
                mp.erase(lru->key);
                removeNode(lru);
                delete lru;
            }
            
            // Add new node
            Node* newNode = new Node(key, value);
            mp[key] = newNode;
            addHead(newNode);
        }
    }
};