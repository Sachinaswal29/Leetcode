class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // Brute force
        // int maxi=0;
        // for(int i=0;i<arr1.size();i++){
        //     string x=to_string(arr1[i]);
        //     for(int j=0;j<arr2.size();j++){
        //         string y=to_string(arr2[j]);
        //         int length=min(x.size(),y.size());
        //         int k=0;
        //         while(k<length && x[k]==y[k]){
        //             k++;
        //         }
        //         maxi=max(maxi,k);
        //     }
        // }return maxi;
        
        unordered_set<int>st;
        for(auto& num:arr1){
            while(!st.contains(num) && num>0){
                st.insert(num);
                num/=10;
            }
        }

        int maxPrefLen=0;
        for(auto& num:arr2){
            while(!st.contains(num) && num>0){
                num/=10;
            }
            if(num>0){
                maxPrefLen=max(maxPrefLen,(int)log10(num)+1);
            }
        }
        return maxPrefLen;
    }
};