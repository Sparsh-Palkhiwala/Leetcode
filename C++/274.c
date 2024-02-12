// 274 - H-Index
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low = 0;
        int high = citations.size()-1;
        while(low < high)
        {
            int mid =  (low+high+1)/2;
            int count = 0;
            for(int i = 0 ; i < citations.size() ; i++)
            {
                if(citations[i] >= mid)
                    count++;
            }
            if(count >= mid)
                low = mid;
            else 
                high = mid-1;
        }
        return low;
    }
};

// We perform binary search to find a value from 0 to citations.size() 
// such that the given value can be within that range and has atleast h
// citaions greater than the value of h.