class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        // code here
        vector<int> arr(n,0);
        for(int i:updates){
            arr[i-1]=arr[i-1]+1;
            
        }
        int prefixSum=0;
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            arr[i]=prefixSum;
            
        }
        return arr;
        
    }
};