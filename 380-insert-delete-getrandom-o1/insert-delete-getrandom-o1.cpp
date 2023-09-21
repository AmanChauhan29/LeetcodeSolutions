class RandomizedSet {
public:
    unordered_set<int> ans;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(ans.find(val)!=ans.end()){
            return false;
        }
        else{
            ans.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        auto pos = ans.find(val);
        if(pos!=ans.end()){
            ans.erase(pos);
            return true;
        }else{
            return false;
        }

    }
    
    int getRandom() {
        int idx = rand()%ans.size();
        auto it = ans.begin();
        advance(it,idx);
        
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */