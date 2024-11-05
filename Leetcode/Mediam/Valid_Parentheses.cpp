#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('|| s[i] == '[' || s[i] =='{'){
                chars.push(s[i]);
            }
            else if(chars.empty()) return false;
            else{
                switch(s[i]){
                    case ')':{
                        if(chars.top() != '('){
                            return false;
                        }
                        break;
                    }
                    case ']':{
                        if(chars.top() != '['){
                            return false;
                        }
                        break;
                    }
                    case '}':{
                        if(chars.top() != '{'){
                            return false;
                        }
                        break;
                    }
                }
                chars.pop();
            }
        }
        return chars.empty();
    }
};
int main(){
    Solution s;
    cout << s.isValid("()");
}