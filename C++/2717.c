// 2717. Semi-Ordered Permutation
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        if(nums[0] == 1 && nums[nums.size()-1] == nums.size())
        {
            return 0;
        }
            int count = 0;
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(nums[i] == 1)
                {
                    count = count + i;
                    int j = i;
                    while(j>0)
                    {
                        int temp = nums[j];
                        nums[j] = nums[j-1];
                        nums[j-1] = temp;
                        j--;
                    }
                }
            }
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(nums[i] == nums.size())
                {
                    count = count + ((nums.size()-1)-i);
                }
            }
            return count;    
    }
};
/*

Array
Simulation
Intuition
Sure! Let me explain the code in first person and discuss its complexity.

In this code, I see a class named Solution with a member function semiOrderedPermutation. This function takes a reference to a vector of integers nums as input and calculates a count value based on certain conditions.

Approach
Now, let's go through the code step by step:

First, there is an if condition that checks if the first element of nums is 1 and the last element is equal to the size of nums. If this condition is true, it means that the vector is already a semi-ordered permutation, and there is no need to perform any operations. In this case, the function returns 0.

If the condition in the previous step is not met, the code initializes a variable count to 0. This variable will be used to keep track of the count value.

The code then enters a for loop that iterates over the elements of the nums vector. Inside this loop:

It checks if the current element is equal to 1.
If the condition is true, it means that we have found the first element of the permutation. We update the count by adding the current index i to it. This is because we want to count the number of swaps required to bring the first element (1) to its correct position.
Next, there is a nested while loop that performs the actual swapping of elements. Starting from the current index j = i, it iterates backwards and swaps nums[j] with nums[j-1] until j becomes 0. This effectively moves the first element to the front of the vector.
After the first loop finishes, the code enters another for loop that iterates over the elements of nums once again. Inside this loop:

It checks if the current element is equal to the size of nums. If the condition is true, it means we have found the last element of the permutation. We update the count by adding the difference between (nums.size() - 1) and the current index i to it. This accounts for the number of swaps required to bring the last element to its correct position.
Finally, the function returns the calculated count value, representing the number of swaps needed to obtain a semi-ordered permutation of nums.

Complexity
Time complexity : The code runs two nested loops, each iterating over the elements of nums, so the time complexity is O(n^2), where n is the size of the vector.

Space complexity : The space complexity of the code is O(1) as it only uses a constant amount of additional space, regardless of the input size.
*/