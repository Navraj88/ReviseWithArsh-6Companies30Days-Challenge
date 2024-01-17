/*
1823. Find the Winner of the Circular Game
Solved
Medium
Topics
Companies
Hint
There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.

The rules of the game are as follows:

Start at the 1st friend.
Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
The last friend you counted leaves the circle and loses the game.
If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
Else, the last friend in the circle wins the game.
Given the number of friends, n, and an integer k, return the winner of the game.



*/


class Solution {
public:
    int solve(vector<int>& v,int i,int k){
        if(v.size()==1){
            return v[0];
        }
        int index=(i+k)%v.size();
        v.erase(v.begin()+index);
        return solve(v,index,k);

    }
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        k--;
        return solve(v,0,k);
    }
};
