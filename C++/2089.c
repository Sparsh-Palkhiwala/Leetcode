//2089 - Find Target Indices After Sorting Array
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
/*
Approach
We sort the given vector to us and then search for the target within the sorted vector. If the target is hit , then we store the value in the vector ans.

Complexity
Time complexity: O(n) --> as we iterate throught the entire vector to search for the position of target
Space complexity: O(n) --> if the entire vector is made up of target , then it has to store the entire vector , thus O(n).
*/

