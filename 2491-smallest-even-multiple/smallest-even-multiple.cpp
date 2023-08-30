class Solution {
public:
    int smallestEvenMultiple(int n) {
        int value;
        for(int i =1; i<=10; i++){
            value = n*i;
            if((value % 2 == 0) && (value % n == 0)){
                return value;
            }
        }
        return 0;
    }
};