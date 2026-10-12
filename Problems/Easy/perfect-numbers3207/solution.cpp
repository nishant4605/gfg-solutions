class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        if(n<=1)return false;
        int countSum=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                countSum+=i;
                if(i!=n/i){
                    countSum+=n/i;
                }
            }
        }
        return countSum==n;
        
    }
};