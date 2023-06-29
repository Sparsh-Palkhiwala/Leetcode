// 1232 -  Check if it is in a Straight line - https://leetcode.com/problems/check-if-it-is-a-straight-line/solutions/3695397/basic-c-solution-easy-to-understand-explained-beats-100-runtime-beginner-friendly/
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        for (int i = 2; i < coordinates.size(); i++) {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];
            
            if ((x1 - x0) * (yi - y0) != (xi - x0) * (y1 - y0)) {
                return false;
            }
        }
        
        return true;
    }
};

/*
Intuition
The given code defines a class named Solution with a function checkStraightLine. This function takes a 2D vector coordinates as input, where each element represents the x and y coordinates of a point.

Approach
The code extracts the x and y coordinates of the first two points from the coordinates vector and assigns them to x0, y0, x1, and y1 variables, respectively.

The code enters a for loop starting from index 2, iterating over the remaining points in the coordinates vector.

For each point, represented by xi and yi, the code checks if it lies on the same straight line as the first two points.

The check for collinearity is performed using the slope formula. The code checks if the cross-products of the line segments formed by (x1, y1) and (xi, yi) and (x1, y1) and (x0, y0) are equal. If they are not equal, it means the points are not collinear, and the function returns false.

If all points pass the collinearity check, the function returns true, indicating that all the points lie on the same straight line.

In summary, the code determines if all the points in the coordinates vector lie on the same straight line. It does this by comparing the slopes between pairs of points, starting from the first two points. If the cross-products of the line segments formed by the points are equal, then the points are collinear, and the function returns true. Otherwise, it returns false.

The time complexity of this code is O(n), where n is the number of points in the coordinates vector. The code iterates through the points once,

Having tried various solutions with it feels like should have paid more attention to geometry class in high school.

Complexity
Time complexity : The time complexity of this code is O(n), where n is the number of points in the coordinates vector. The code iterates through the points once
*/