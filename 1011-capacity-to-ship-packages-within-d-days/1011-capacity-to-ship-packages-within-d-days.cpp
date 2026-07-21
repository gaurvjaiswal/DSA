class Solution {
public:

    bool isPossible(vector<int>& weights, int days, int capacity) {

        int dayCount = 1;
        int load = 0;

        for (int i = 0; i < weights.size(); i++) {

            if (load + weights[i] <= capacity) {
                load += weights[i];
            }
            else {
                dayCount++;

                if (dayCount > days || weights[i] > capacity)
                    return false;

                load = weights[i];
            }
        }

        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int s = 0;
        int e = 0;

        for (int i = 0; i < weights.size(); i++) {
            s = max(s, weights[i]);
            e += weights[i];
        }

        int ans = e;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (isPossible(weights, days, mid)) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return ans;
    }
};