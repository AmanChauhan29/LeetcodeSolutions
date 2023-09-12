class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digit = 0;
        for(auto x: nums){
            sum += x;
            while(x>0){
                int rem = x % 10;
                digit += rem;
                x/=10;
            }
        }
        return abs(sum - digit);
    }
};