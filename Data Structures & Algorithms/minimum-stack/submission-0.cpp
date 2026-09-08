class MinStack {
public:
    vector<int> stackk;
    MinStack() {
    }
    
    void push(int val) {
        stackk.push_back(val);
    }
    
    void pop() {
        if(stackk.size()>=1){
            stackk.pop_back();
        }
    }
    
    int top() {
        if(stackk.size()>=1){
            return stackk.back();
        }
        return 0;
    }
    
    int getMin() {
        return *min_element(stackk.begin(), stackk.end());
    }
};
