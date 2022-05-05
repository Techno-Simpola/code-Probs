class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int countNum = 0, countDig;
        for(auto it=nums.begin(); it!=nums.end(); ++it){
            
            //*it is the element of the vector array
            countDig = 0;
            //digits counting start
            while(*it>0){
                
                *it=*it/10;
                countDig++;
                
            }

            if(countDig % 2 == 0)
                countNum++;
        }
        
        return countNum;
    }
};
