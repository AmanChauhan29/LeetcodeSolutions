class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mpp;
        mpp.insert({'I',1});
        mpp.insert({'V',5});
        mpp.insert({'X',10});
        mpp.insert({'L',50});
        mpp.insert({'C',100});
        mpp.insert({'D',500});
        mpp.insert({'M',1000});
        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            auto it = mpp.find(s[i]);
            int first = it->second; //mpp.find(s[i]);
            if(i+1<s.size()){
                auto it = mpp.find(s[i+1]);
                int second = it->second;
                if(first<second){
                    ans += (second - first);
                    i+=1;
                }
                else{
                    ans += first;
                }
            }
            else{
                ans += first;
            }
        }
        return ans;
    }
};