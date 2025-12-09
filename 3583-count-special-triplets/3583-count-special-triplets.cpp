class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        
        const long long MOD = 1e9 + 7;
        int n = nums.size();
        
        unordered_map<long long, long long> leftCount, rightCount;

        // Count all numbers to the right initially
        for (int x : nums) {
            rightCount[x]++;
        }

        long long result = 0;

        for (int j = 0; j < n; j++) {
            long long mid = nums[j];

            // Remove nums[j] from right side since it's now the middle point
            rightCount[mid]--;

            long long need = mid * 2;  // nums[i] and nums[k] must be equal to this

            long long leftMatches = leftCount[need];   // nums[i] == mid*2
            long long rightMatches = rightCount[need]; // nums[k] == mid*2

            result = (result + (leftMatches * rightMatches) % MOD) % MOD;

            // Mark nums[j] as seen on the left
            leftCount[mid]++;
        }

        return result % MOD;
    }
    
};