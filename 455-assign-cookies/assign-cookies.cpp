class Solution {
public:
    int findContentChildren(vector<int>& student, vector<int>& cookie) {
       int i = 0;
       int j = 0;

       sort(student.begin(), student.end());
        sort(cookie.begin(), cookie.end());

        while(i<student.size()&&j<cookie.size()){
            if(cookie[j]>=student[i]){
                i++;
            }
            j++;
        }
        return i;

    }
};