// Problem Name: Merge_Sorted_Array
// URL: https://leetcode.com/problems/merge-sorted-array/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        queue<int> n1;
        queue<int> n2;
        for(int i=0; i<m; i++){
            n1.push(nums1[i]);
        }
        nums1.clear();
        for(int i=0; i<n ; i++){
            n2.push(nums2[i]);
        }
        while(!n1.empty() && !n2.empty()){
            if(n1.front() > n2.front()){
                nums1.push_back(n2.front());
                n2.pop();
            } else {
                nums1.push_back(n1.front());
                n1.pop();
            }
        }
        while(!n1.empty()){
            nums1.push_back(n1.front());
            n1.pop();
        }
        while(!n2.empty()){
            nums1.push_back(n2.front());
            n2.pop();
        }
    }
};
