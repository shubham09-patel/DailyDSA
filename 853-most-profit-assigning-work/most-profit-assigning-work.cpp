class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
    // Step 1: Difficulty aur profit ko ek saath jodein aur sort karein
        int n = d.size();
        vector<pair<int, int>> jobs(n);
        for (int k = 0; k < n; k++) {
            jobs[k] = {d[k], p[k]};
        }
        sort(jobs.begin(), jobs.end());
        sort(w.begin(), w.end());

        // Step 2: Aapka wala simple pointer-based loop
        int currentProfit = 0;
        int totalProfit = 0;
        int i = 0; // Jobs ke liye pointer
        int j = 0; // Workers ke liye pointer

        while (j < w.size()) {
            // Check karein ki 'i' range me hai YA NAHI, aur worker job kar sakta hai ya nahi
            if (i < n && w[j] >= jobs[i].first) {
                if (jobs[i].second > currentProfit) {
                    currentProfit = jobs[i].second; // Best profit update karein
                }
                i++; // Agla job check karein
            } 
            else {
                // Agar worker agla job nahi kar sakta (ya saare jobs check ho gaye):
                totalProfit = totalProfit + currentProfit; // Iss worker ka profit add karein
                j++; // Agle worker par jayein
                // NOTE: 'i' aur 'currentProfit' ko RESET NAHI KARNA HAI!
            }
        }

        return totalProfit;
    }
};