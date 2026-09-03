class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //finding minimam value of nums1? because we cant change their partiy
        int min = *min_element(nums1.begin(), nums1.end());

        //jo minimum value odd hai ? kuki agar minimum odd hui to ham baki sare element ko odd bana skte hai 
        if(min%2 == 1){
            return true;
        }

        ///lekin even hui minimum valu to bakio ko even tabhi bana kste hai jb vo khud even ho kuki 
        //even - even = even 
        //odd - odd = even
        //even - odd = odd
        //odd - even = odd

        for(int i = 0; i<nums1.size(); i++){
            if(nums1[i]%2 == 1){
                return false;
            }
        }
        return true;
    
        

    }
};