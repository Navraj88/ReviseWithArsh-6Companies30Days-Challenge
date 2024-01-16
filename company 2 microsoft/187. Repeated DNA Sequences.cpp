/*
187. Repeated DNA Sequences
Solved
Medium
Topics
Companies
The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.

For example, "ACGAATTCCG" is a DNA sequence.
When studying DNA, it is useful to identify repeated sequences within the DNA.

Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order.


*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>m;
        int n=s.length();
        for(int i=0;i<n-9;i++){
            string t=s.substr(i,10);
            m[t]++;
        }
        vector<string>ans;
        for(auto x:m){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
