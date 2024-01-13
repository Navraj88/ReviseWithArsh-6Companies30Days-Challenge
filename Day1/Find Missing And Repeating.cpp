class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
    int repeatingNumber = -1;
        int missingNumber = -1;
        
        // Rearrange the array such that the element at each index is equal to its value
        for (int i = 0; i < n; ) {
            if (arr[i] != arr[arr[i] - 1]) {
                swap(arr[i], arr[arr[i] - 1]);
            } else {
                i++;
            }
        }
        
        // Find the first mismatched element to identify the repeating and missing numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                repeatingNumber = arr[i];
                missingNumber = i + 1;
                break;
            }
        }
        
        return {repeatingNumber, missingNumber};
    }
};
