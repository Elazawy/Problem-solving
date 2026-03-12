// URL -> https://leetcode.com/problems/insert-delete-getrandom-o1/
// Date: 3 12 2026
class RandomizedSet {
public:
    vector<int> vals;
    unordered_map<int, int> pos;
    RandomizedSet() {
    }
    bool insert(int val) {
        if(pos.count(val)) return false;
        vals.push_back(val);
        pos[val] = vals.size() - 1;
        return true;
    }
    bool remove(int val) {
        if(pos.count(val) == 0) return false;
        int rm_val_index = pos[val];
        int lastVal = vals.back();
        pos[lastVal] = rm_val_index;
        vals[rm_val_index] = lastVal;
        vals.pop_back();
        pos.erase(val);
        return true;
    }
    
    int getRandom() {
        return vals[rand() % vals.size()];
    }
};

