class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0;
        int result=0;
        
        for(auto i=nums.begin(); i!= nums.end(); ++i){
            
            if(*i==0)
                count=0;
            
            else{
                count++;
                result = max(result,count);
            }
        }
        
        return result;
        
    }
};
