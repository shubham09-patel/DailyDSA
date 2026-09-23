class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int BestEnding = arr[0];
        int ans = arr[0];

        for(int i = 1; i<arr.size(); i++){
            int v1 = arr[i];
            int v2 = BestEnding+arr[i];
            BestEnding = max(v1,v2);
            ans = max(ans, BestEnding);
        }
        return ans;
    }
};