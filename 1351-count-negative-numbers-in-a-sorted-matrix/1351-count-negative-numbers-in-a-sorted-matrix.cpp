class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0; i<grid.size(); i++){
            int low=0;
            int n=grid[i].size();
            int high=grid[i].size()-1;
            
            if(grid[i][low]<0){
                count+=n;
            }else if(grid[i][high]>0){
                count+=0;
            }
            else{
            while(low<=high){
                int mid=low+((high-low)/2);
                if(grid[i][mid]>=0) {low=mid+1;}
                if(grid[i][mid]<0 && grid[i][mid-1]>=0) {count+=n-mid; break;}
                if(grid[i][mid]<0 && grid[i][mid-1]<0) {high=mid-1;}
            }
            }
        }
      
        
        return count;

    }
};