class Solution {
public:

    bool isPossible(vector<int>& candies, long long k, int mid){

        long long children = 0;

        for(int pile : candies){

            children += pile / mid;

            if(children >= k)
                return true;
        }

        return false;
    }

    int maximumCandies(vector<int>& candies, long long k) {

        int low = 1;
        int high = *max_element(candies.begin(), candies.end());

        int ans = 0;

        while(low <= high){

            int mid = low + (high - low)/2;

            if(isPossible(candies, k, mid)){

                ans = mid;
                low = mid + 1;
            }
            else{

                high = mid - 1;
            }
        }

        return ans;
    }
};