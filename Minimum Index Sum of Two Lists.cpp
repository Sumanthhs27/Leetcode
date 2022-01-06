// class Solution {
// public:
//     vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
//       int count = INT_MAX;
//       vector<string> str {" "};
//       for (int i=0; i<list1.size(); ++i){
//           for(int j=0; j<list2.size(); ++j){
//               if(list1[i] == list2[j]){
//                   if( i+j < count ){
//                       count  = i+j; 
//                       str[0] = list1[i]; 
//                       break;
//                   }
//                   else if ( i+j == count){
//                       str.push_back(list1[i]);
//                       break;
//                   }
                  
                  
//               }
//           }
//       }
//         return str; 
//     }
// };
class Solution {
public:
    static vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> v;
        int max=2000,temp=0;
        for(int i=0;i<list1.size();i++){
            auto it=find(list2.begin(),list2.end(),list1[i]);
            int idx=it-list2.begin();
            if(idx>=list2.size()) continue;
            if(idx+i==max){
                v.push_back(list1[i]);
            }
            if(idx+i<max) {
                for(auto j=0;j<v.size();j++) v.pop_back();
                max=idx+i;
                v.push_back(list1[i]);
            }
        }
        return v;
    }
};
