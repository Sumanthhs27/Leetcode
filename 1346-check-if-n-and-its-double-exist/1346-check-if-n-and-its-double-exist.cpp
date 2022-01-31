class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int maxi = arr[n-1];
        int mini = arr[0];
        bool flg = false;
        
        for(int i=0;i<n;i++){
        if(arr[i]>=0){
            if((i!=n-1)&&(binary_search(arr.begin()+i+1,arr.end(),2*arr[i])))return true;
        }else{ 
            if((i>0)&&(binary_search(arr.begin(),arr.begin()+i,2*arr[i])))return true;
        }    
    }
    return false;
    }

};