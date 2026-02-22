// URL -> https://leetcode.com/problems/design-hashmap/description/
// Date: 2 22 2026

class MyHashMap {
public:
    struct Node {
        int key;
        int value;
        Node *next;
        Node(int k, int val){
            key = k;
            value = val;
            next = nullptr;
        }
    };
    vector<Node*> buckets;
    MyHashMap() {
        buckets = vector<Node*>(1001, nullptr);
    }
    
    void put(int key, int value) {
        int index = key % 1001;
        Node *temp = buckets[index];
        if(temp == nullptr){
            buckets[index] = new Node(key, value);
            return;
        }
        while(true){
            if(temp->key == key){
                temp->value = value;
                return;
            }
            if(temp->next == nullptr) break;
            temp = temp->next;
        }
        temp->next = new Node(key, value);
    }
    
    int get(int key) {
        int index = key % 1001;
        Node *temp = buckets[index];
        while(temp != nullptr){
            if(temp->key == key){
                return temp->value;
            }
            temp = temp->next;
        }
        return -1;
    }
    void remove(int key) {
        int index = key % 1001;
        Node *temp = buckets[index];
        if(temp == nullptr) return;
        if (temp->key == key) {
            buckets[index] = temp->next;
            delete temp;
            return;
        }  
        while(temp->next != nullptr){
            if(temp->next->key == key){
                Node *d = temp->next;
                temp->next = temp->next->next;
                delete d;
                return;
            }
            temp = temp->next;
        }        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
