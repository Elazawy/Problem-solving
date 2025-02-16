// Problem Name : Remove Duplicates from sorted array
// URL : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let unique_nums = [];
    unique_nums.push(nums[0]);
    for(let i=1; i<nums.length; i++){
        if(nums[i] > unique_nums[unique_nums.length -1]){
            unique_nums.push(nums[i]);
        }
    }
    for(let i=0; i<unique_nums.length; i++){
        nums[i] = unique_nums[i];
    }
    return unique_nums.length;
};
