// URL -> https://leetcode.com/problems/minimum-index-sum-of-two-lists/
// Date: 25 2 2026


class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> list1_map;
        for(int i = 0; i < list1.size(); i++) {
            list1_map.insert(make_pair( list1[i], i ));
        }
        unordered_map<string, int> comm_strs;
        int min_index_sum = 2010;
        for(int i = 0; i < list2.size(); i++) {
            auto it = list1_map.find(list2[i]); 
            if(it != list1_map.end()) {
                int index_sum = i + it->second;
                if(index_sum <= min_index_sum){
                    comm_strs.insert(make_pair(list2[i], index_sum));
                }
                if(index_sum < min_index_sum) min_index_sum = index_sum;
            }
        }
        vector<string> result;
        for(auto it = comm_strs.begin(); it != comm_strs.end(); it++) {
            if(it->second == min_index_sum) result.push_back(it->first);
        }
        return result;
    }
};
