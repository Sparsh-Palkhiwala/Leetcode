// 135 - Candy 
// Requirement :-
// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
class Solution {
public:
    int candy(vector<int>& ratings) {
    vector<int> candy(ratings.size(),1);
    if(ratings.size() == 1)
        return 1;
    int csum = 0;
    if(candy[0] > candy[1])
        candy[0] = candy[1]+1;
    for(int i = 1 ; i < ratings.size() ; i++)
    {
        if(ratings[i-1] < ratings[i])
        {
            candy[i] = candy[i-1]+1;
        }
    }
    if(ratings[ratings.size()-1] > ratings[ratings.size()-2])
    {
        candy[ratings.size()-1] = candy[ratings.size()-2]+1;
    }
    for(int i = ratings.size()-2 ; i >= 0 ; i--)
    {
        if(ratings[i] > ratings[i+1])
        {
            if(candy[i] > candy[i+1])
                continue;
            else if(candy[i] == candy[i+1])
            {
                candy[i]++;
            }
            else
            {
                candy[i] = candy[i+1] + 1;
            }
        }
    }

    for(int i = 0 ; i < candy.size() ; i++)
        csum += candy[i];
    return csum;
    }
};


// We need to find the total number of candies to be given to student dependent on 
// rating, we iterate through the array left to right, comparing i to i-1
// and giving candies to the student on this ratings comparison on we are done 
// we iterate right to left comparing i and i+1, and see if there is a need to increase 
// the number of candies being given to the students.