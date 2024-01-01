class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string,vector<int>>access;
        for(auto & entry:access_times){
            string name=entry[0];
            int time=stoi(entry[1]);
            access[name].push_back(time);
        }
        vector<string>ans;
        for(auto & employee:access){
            sort(employee.second.begin(),employee.second.end());
            for(int i=2;i<employee.second.size();i++){
                if(employee.second[i]-employee.second[i-2]<100){
                    ans.push_back(employee.first);
                    break;
                }
            }
        }
        return ans;
    }
};
