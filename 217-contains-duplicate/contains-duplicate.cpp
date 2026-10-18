class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //we decalere a unordered set 
        unordered_set<int> seen;
       

        //we traverse the nums array for checkinng that nums[i] is present in seen set or not 
        for(int i = 0; i< nums.size(); i++){
             //cheacking nums[i] present in seen set ?
             if(seen.count(nums[i])){
                return true;
             }

             seen.insert(nums[i]);
            
            //agar nahi milta to use seen me store krvado 
          

        }
        return false;
        
           
       
    }
};