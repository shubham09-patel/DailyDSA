class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        //checek esa number banna possible hai ya nahi ....
        if(sum<1 || sum>9*num){
            return "";
        }

        string ans = "";
        int rem_sum = sum;
        // Step 2: Har digit ki jagah par maximum possible digit (9 ya jitna sum bacha ho) rakhto
        for (int i = 0; i < num; ++i) {
            int digit = std::min(9, rem_sum); // 9 aur rem_sum me se jo chota ho
            ans += std::to_string(digit);
            rem_sum -= digit; // Sum me se wo digit minus kar do
        }
        
        return ans; // Final string return kar do
    }
};