class Solution {
  public:
    int maxValue(int n) {
        // code here
        int ans=n;
        for(int i=31;i>=2;i--){
            if((ans &(1u<<i)) && (ans&(1u<<i-1)) && (ans&(1u<<i-2))){
                ans=ans&(~(1u<<i-2));
            }
        }
        return ans;
        
    }
};