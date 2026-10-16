class Solution {
public:
    bool isAnagram(string s, string t) {
        //edge cases... if string s and t both have different length the retrun false firstly;
        if(s.length() != t.length()){
            return false;
        }
        //ek 26 size ki array jo har lettere ki frequescy ko store/count kregi 
        vector<int>count(26,0);

        // traver both string
        for(int i = 0 ; i < s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int i = 0; i<26; i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;


    }
};