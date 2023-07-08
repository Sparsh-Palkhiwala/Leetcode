//1313. Decompress Run-Length Encoded List
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v1;
        for(int i = 0 ; i<nums.size()-1 ; i=i+2)
        {
            int count =  0;
            while(count <nums[i])
            {
                v1.push_back(nums[i+1]);
                count++;
            }
        }
        return v1;
    }
};

/*
Certainly! Let me explain the code and discuss its complexity.

In this code, I see a class named `Solution` with a member function `decompressRLElist`. This function takes a reference to a vector of integers `nums` as input, representing a Run-Length Encoded (RLE) list, and aims to decompress it.

Now, let's go through the code step by step:

1. The code starts by initializing an empty vector `v1`, which will store the decompressed list.

2. It then enters a `for` loop that iterates over the elements of the `nums` vector. The loop increments the index by 2 in each iteration, as each pair of elements in `nums` represents a frequency-value pair.

3. Inside the loop:
   - It initializes a `count` variable to 0, which will be used to track the number of times to append the value to `v1`.
   - It enters a nested `while` loop that runs until `count` is less than the frequency (`nums[i]`).
   - Within the `while` loop, it appends the value (`nums[i+1]`) to the `v1` vector and increments the `count` variable.
   - This process continues until `count` reaches the frequency specified by `nums[i]`, effectively decompressing the frequency-value pair.

4. After the loop finishes, the function returns the `v1` vector containing the decompressed list.

Regarding complexity:
- The code runs a single loop that iterates over half of the elements in the `nums` vector since it processes pairs of elements. Therefore, the time complexity is O(n/2), which simplifies to O(n), where n is the size of the `nums` vector.
- The space complexity is O(m), where m is the total number of elements in the decompressed list. In the worst case, where each frequency in `nums` is 1, the decompressed list will have a length equal to the sum of all frequencies.*/