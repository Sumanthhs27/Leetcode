class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        int temp;
        for(int x:cardPoints) sum += x;
        
        int min_windowSum = INT_MAX;
        int windowSum = 0;
        int i=0, j = n-1-k;
        
        for(int i=0; i<=j; i++) windowSum += cardPoints[i];
        
        min_windowSum = windowSum;
        
        i = 0;
        while(j < n-1){
            temp = windowSum - cardPoints[i] + cardPoints[j+1];
            min_windowSum = min(min_windowSum, min(windowSum,temp));
            windowSum = temp;
            cout << i << " " << j << "         " << temp << endl;
            i++;
            j++;
        }
        return sum-min_windowSum;
    }
};