/* 2526. Find Consecutive Integers from a Data Stream
Solved
Medium
Topics
Companies
Hint
For a stream of integers, implement a data structure that checks if the last k integers parsed in the stream are equal to value.

Implement the DataStream class:

DataStream(int value, int k) Initializes the object with an empty integer stream and the two integers value and k.
boolean consec(int num) Adds num to the stream of integers. Returns true if the last k integers are equal to value, and false otherwise. If there are less than k integers, the condition does not hold true, so returns false.
 */


class DataStream {
public:
    int value,k;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
    }
    int index=0;
    int last=-1;
    bool consec(int num) {
        if(num!=value){
            last=index;
        }
        index++;
        if(index<k){
            return false;
        }
        if(index>=k){
            if((index-k)<=last){
                return false;
            }
        }
        return true;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
