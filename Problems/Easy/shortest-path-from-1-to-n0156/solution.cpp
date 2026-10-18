class Solution {
  public:
    int minimumStep(int n) {
        int a=0;
        while(n>1){
            if(n%3==0){
                n/=3;
            }else{
                n--;
            }
            a++;
        }
        return a;
        // code here
        
    }
};