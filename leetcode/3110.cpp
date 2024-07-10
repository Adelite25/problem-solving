class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        int n = s.length();

        for (int i=1; i< n ; i++){
            //ans += abs(s[i-1]-s[i]);
            int a = s[i-1]; 
            int b = s[i]; 
            ans += abs(a-b);
        }
        return ans;
    }
};