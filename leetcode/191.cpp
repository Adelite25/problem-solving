class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0){
            n = n & (n-1);
            count++ ;
        }
        return count;

        /*
        int count = 0;
        while (n){
            count += n % 2;
            n = n >> 1;

        }
        return count;
        */
      
    }
};
