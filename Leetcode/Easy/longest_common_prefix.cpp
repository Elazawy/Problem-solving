// Problem name : Longest common prefix
// URL : https://leetcode.com/problems/longest-common-prefix/
// Date : Thu Sep 10 2024

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_prefix = strs.at(0);
        string each_str = strs.at(0);
        for(string& str : strs) {
            int num_common_chars = 0;
            for(int j=0;j<min(str.size(), common_prefix.size()); j++){
                if(str[j]==common_prefix[j])
                    num_common_chars++;
                else
                    break;
            }
            common_prefix = str.substr(0,num_common_chars);
            if(common_prefix.empty())
                return "";
        }
        return common_prefix;
    }
};