class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int s = 0;
        int e = letters.size() - 1;

        int ans = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (letters[mid] > target) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        if (ans == -1)
            return letters[0];

        return letters[ans];
    }
};