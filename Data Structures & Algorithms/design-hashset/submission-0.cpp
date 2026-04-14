class MyHashSet {
private:
    vector<int> keys;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        keys.push_back(key);
    }
    
    void remove(int key) {
        erase(keys, key);
    }
    
    bool contains(int key) {
        for(int i = 0; i<keys.size(); i++){
            if(keys[i] == key){
                return true;
            }
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */