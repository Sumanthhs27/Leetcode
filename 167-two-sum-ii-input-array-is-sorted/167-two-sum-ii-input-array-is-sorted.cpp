class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        vector <int> arr ;
        while(i<j){
            if(numbers[i] + numbers[j] == target){
                arr.push_back(i+1);
                arr.push_back(j+1);
                return arr;
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
                continue;
            }
            else i++;
           
        }
        return arr;
    }
};