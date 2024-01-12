class Solution {
public:
    int row,col;
    set<pair<int,int>>s;
    Solution(int m, int n) {
        row=m;
        col=n;
        s.clear();
    }
    
    vector<int> flip() {
        int i,j;
        i=rand()%row;
        j=rand()%col;
        while(s.count({i,j})>0){
            i=rand()%row;
            j=rand()%col;  
        }
        s.insert({i,j});
        return {i,j};
    }
    
    void reset() {
        s.clear();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */
