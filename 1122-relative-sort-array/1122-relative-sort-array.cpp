class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxi=*max_element(arr1.begin(),arr1.end());
        vector<int>freq(maxi+1,0);
        for(auto& x:arr1) freq[x]++;
        int j=0;
        for(auto& x:arr2){
            while(freq[x]--){
                arr1[j++]=x;
            }
        }
        for(int i=0;i<freq.size();i++){
            while(freq[i]-- >0){
                arr1[j++]=i;
            }
        }
        return arr1;
    }
};