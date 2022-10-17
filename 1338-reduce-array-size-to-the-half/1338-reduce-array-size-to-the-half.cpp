class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int> q;
        unordered_map<int,int> m;
        for(int i : arr) m[i]++;
        for(auto it=m.begin(); it!=m.end(); it++){
            q.push(it->second);
        }
        int n = arr.size(), half, res = 0;
        if(n%2 == 0) half = n/2;
        else half = n/2 + 1;
        while(!q.empty() && half>0){
            half -= q.top();
            q.pop();
            res++;
        }
        return res;
    }
};