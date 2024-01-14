/* Number following a pattern
MediumAccuracy: 55.44%Submissions: 54K+Points: 4
Dive into Premium Learning with Confidence – Win 90% Refund in 90 Days. Discover How 

banner
Given a pattern containing only I's and D's. I for increasing and D for decreasing. Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can't repeat.
*/

class Solution{   
public:
    string printMinNumberForPattern(string S){
        string ans="";
        stack<int>s;
        int n=S.length();
        for(int i=0;i<=n;i++){
            s.push(i+1);
            if(S[i]=='I'|| i==n){
                while(!s.empty()){
                    ans+=to_string(s.top());
                    s.pop();
                }
            }
        }
        return ans;
    }
};
