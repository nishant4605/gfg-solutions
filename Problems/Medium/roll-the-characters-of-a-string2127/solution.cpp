


class Solution {
  public:
    string findRollOut(string& s, vector<int>& roll) {
        
        int n = s.size();

        vector<int> surfixSum(n, 0);

        for (int i : roll) {
            surfixSum[i - 1] = surfixSum[i - 1] + 1;
        }

        int sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum += surfixSum[i];
            surfixSum[i] = sum;
        }

        for (int i = 0; i < n; i++) {
            int a = s[i] - 'a';
            a = (a + surfixSum[i]) % 26;
            s[i] = 'a' + a;
        }

        return s;
    }
};

