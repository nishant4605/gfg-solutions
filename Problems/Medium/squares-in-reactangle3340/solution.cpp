class Solution {
  public:
    int minSquares(int n, int m) {
        
        /*
        this is the detialed soln how the complete approach is working 
        and what cases should be taking care of while solving that problem.
                
        int a=min(n,m);
        int b=max(n,m);
        
        int width=b;
        int count=0;
        
        while(width>0 && a>0){
            if(width==a){
                count++;
                return count;
            }
            else if(width % a==0){
                count+=width/a;
                return count;
            }
            else if(width>a){
                width=width-a;
                count++;
            }
            else{
                count+=(a/width);
                a=a%width;
            }
            
            
        }
        return count;
        */
        
        // this is the same concise soln.
        int a = min(n, m);
                int b = max(n, m);
                int count = 0;

                while (a > 0) {
                    count += b / a;
                    int rem = b % a;
                    b = a;
                    a = rem;
                }

                return count;
    }
};