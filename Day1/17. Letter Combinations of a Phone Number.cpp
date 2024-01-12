class Solution {
public:
    void generate(string &d,string temp,int index,vector<string>&ans,unordered_map<char,string>&alpha){
        if(d==""){
            return;
        }
        if(index==d.size()){
            ans.push_back(temp);
            return;
        }
        string s=alpha[d[index]];
        for(int i=0;i<s.size();i++){
            temp.push_back(s[i]);
            generate(d,temp,index+1,ans,alpha);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>alpha;
        alpha['2']="abc";
        alpha['3']="def";
        alpha['4']="ghi";
        alpha['5']="jkl";
        alpha['6']="mno";
        alpha['7']="pqrs";
        alpha['8']="tuv";
        alpha['9']="wxyz";
        vector<string>ans;
        string temp;
        generate(digits,temp,0,ans,alpha);
        return ans;

    }
};
