//1287. Element Appearing More Than 25% In Sorted Array
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = 1;
        int check = arr[0];
        for(int i = 1 ; i < arr.size() ; i++)
        {
            if(arr[i] ==  check)
            {
                count++;
            }
            else
            {
                if(count > arr.size()/4)
                {
                    return check;
                }
                else
                {
                    check = arr[i];
                    count = 1;
                }
            }
        }
        return arr[arr.size()-1];
    }
};
/*
Approach
Let's go through the code step by step:

The code initializes a count variable to 1 and a check variable to the first element of the arr vector. These variables will be used to keep track of the count of consecutive occurrences of an element and the current element being checked.

It then enters a for loop that iterates over the elements of the arr vector starting from the second element.

Inside the loop:

It checks if the current element (arr[i]) is equal to the check element.
If they are equal, it means there is a consecutive occurrence of the same element. In this case, it increments the count variable.
If they are not equal, it means we have encountered a new element.
It checks if the count of the previous element (check) is greater than 0.25 times the size of the array (arr.size()). If it is, it means the previous element is the special integer. In this case, it returns the check element as the special integer.
If the count is not greater than 0.25 times the size, it means the previous element is not the special integer. It updates the check variable to the current element and resets the count to 1.
After the loop finishes, it means we have reached the end of the array. In this case, the last element of the array (arr[arr.size()-1]) must be the special integer. Therefore, the code returns this element.

Regarding complexity:
Time complexity : The code runs a single loop that iterates over the elements of the arr vector once. Therefore, the time complexity is O(n), where n is the size of the arr vector.

Space complexity : The space complexity of the code is O(1) as it only uses a constant amount of additional space, regardless of the input size.
*/