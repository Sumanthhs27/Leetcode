class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> m;
        stack <int> s;
        vector<int> v (nums1.size(),0);
        
        for(int i=0; i<nums1.size(); i++) m[nums1[i]] = i;
        
        for(int i=nums2.size()-1; i>=0; i--){
            if(m.find(nums2[i]) != m.end()){
                while(!s.empty()){
                    if(s.top() > nums2[i]){
                        v[m[nums2[i]]] = s.top();
                        break;
                    }
                    else s.pop();
                }
                if(s.empty()){
                    v[m[nums2[i]]] = -1;
                }
            }
            s.push(nums2[i]);
        }        
        return v;
    }
};