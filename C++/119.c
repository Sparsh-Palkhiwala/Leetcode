//Pascal Traingle - https://leetcode.com/problems/pascals-triangle-ii/solutions/3684441/basic-c-solution-easy-to-understand-explained-please-upvote/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 0);
        row[0] = 1;
        for (int i = 1; i < rowIndex+1; i++) 
        {
            for (int j = i; j > 0; j--) 
            {     
                row[j] = row[j] + row[j - 1];
            }
        }
        return row;
    }
};

/*
Intuition
The given code is an implementation of the getRow function that returns the rowIndex-th row of Pascal's triangle as a vector of integers.

Approach
It initializes a vector called row with rowIndex + 1 elements, all set to 0. This vector will store the elements of the current row.
It sets the first element of row to 1 because the first row of Pascal's triangle always contains a single element, which is 1.
It then enters a loop that iterates from 1 to rowIndex.
Within the loop, there is a nested loop that iterates from i to 1. This nested loop updates the elements of row based on the values of the previous row.
In each iteration of the nested loop, the current element at index j is updated by adding the value of the current element with the value of the element at the previous index (j - 1). This calculation corresponds to the Pascal's triangle formula where each element is the sum of the two elements above it in the previous row.
After the nested loop completes for each i, the updated row vector represents the rowIndex-th row of Pascal's triangle.
Finally, the row vector is returned as the output.
This implementation uses an optimized approach that only requires a single vector to store the row elements, updating them in-place without the need for an intermediate 2D matrix representation of Pascal's triangle. The code correctly computes and returns the desired row of Pascal's triangle.

Complexity
Time complexity : The time complexity of the given code is O(rowIndex^2), and the space complexity is O(rowIndex).

Space complexity : The code uses a single vector called row of size rowIndex + 1 to store the elements of the row. Therefore, the space complexity is O(rowIndex) since the space required grows linearly with the rowIndex.

#Please Upvote
*/

