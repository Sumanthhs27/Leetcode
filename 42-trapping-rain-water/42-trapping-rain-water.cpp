class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxi (height.size(),0);
        vector<int> mini (height.size(),0);
        int x = INT_MIN;
        int y = INT_MIN;
        
        for(int i=1; i<height.size(); i++){
            x = max(x,height[i-1]);
            maxi[i] = x;            
        }
        for(int i=height.size()-2; i>=0; i--){
            y = max(y,height[i+1]);
            mini[i] = y; 
        }    
        for(int i=0; i<height.size(); i++){
            height[i] = max((min(maxi[i] , mini[i]) - height[i]),0);
        }
      
        return accumulate(height.begin(),height.end(),0);
    }
};