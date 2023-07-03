//1828 - Queries on Number of Points Inside a Circle
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i = 0 ; i<queries.size() ; i++)
        {
            float dist = 0;
            int x1,x2,y1,y2, count = 0;
            for(int j = 0 ; j<points.size() ; j++)
            {
                x1 = queries[i][0];
                x2 = points[j][0];
                y1 = queries[i][1];
                y2 = points[j][1];
                dist = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) ;
                dist = sqrt(dist);
                if(dist <= queries[i][2])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
}; //Please Upvote and Happy LeetCoding

/*
Intuition
The provided code is a C++ implementation of a function called countPoints that takes two vectors of vectors points and queries. It calculates the number of points from the points vector that lie within the specified radius for each query in the queries vector.

Approach
It creates an empty vector ans to store the counts of points for each query.

It enters a loop that iterates over each query in the queries vector.

Inside the loop, it initializes variables x1, x2, y1, and y2 to store the x and y coordinates of the query and points.

It calculates the squared Euclidean distance between the query and each point using the formula dist = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)).

It calculates the actual Euclidean distance by taking the square root of dist using the sqrt function.

If the calculated distance is less than or equal to the radius specified in the query (queries[i][2]), it increments the count variable.

After processing all points for the current query, it appends the count value to the ans vector.

After completing the loop for all queries, it returns the ans vector containing the counts of points for each query.

Complexity
Time complexity : The time complexity of this code is O(Q * P), where Q is the number of queries and P is the number of points. It involves nested loops where the outer loop iterates over the queries and the inner loop iterates over the points. Therefore, the code executes the inner loop P times for each query, resulting in a total of Q * P iterations.

Space complexity : The space complexity of this code is O(Q), where Q is the number of queries. The ans vector stores the count of points for each query, which requires space proportional to the number of queries.
*/