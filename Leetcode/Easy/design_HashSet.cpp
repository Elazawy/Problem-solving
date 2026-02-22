class MyHashSet {
public:
    vector<vector<int>> keys;
    MyHashSet() {
        keys = vector<vector<int>>(1001);
    }
    
    void add(int key) {
        int index = key % 1001;
        for(int i = 0; i < keys[index].size(); i++){
            if(keys[index][i] == key){
                return;
            }
        }
        keys[index].push_back(key);
    }
    
    void remove(int key) {
        int index = key % 1001;
        for(int i = 0; i < keys[index].size(); i++){
            if(keys[index][i] == key){
                keys[index].erase(keys[index].begin() + i);
                break;
            }
        }
    }
    
    bool contains(int key) {
        int index = key % 1001;
        for(int i = 0; i < keys[index].size(); i++){
            if(keys[index][i] == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
