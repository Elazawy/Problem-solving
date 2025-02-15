// Name : Remove Element
// URL : https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let k = nums.length;
    for(let first=0,last = k-1; first <= last; ){
        if(nums[first] === val){
            if(nums[last] === val){
                last--;
                k--;
            }
            else {
                nums[first] = nums[last];
                last--;
                k--;
            }
        } 
        else {
            first++;
        }
    }
    
    return k;
};
