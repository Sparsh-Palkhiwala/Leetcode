//2798. Number of Employees Who Met the Target
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(),hours.end());
        for(int i = 0 ; i < hours.size() ; i++)
        {
                if(hours[i] >= target)
                    return hours.size()-i;
        }
        return 0;
    }
};

/*
Counting the number of employees whose working hours are greater than target
*/