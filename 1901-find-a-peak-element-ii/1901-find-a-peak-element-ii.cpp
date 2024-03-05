class Solution {
public:
    int max(vector<vector<int>>& mat, int mid){
        int maxi=-1;
        int index=-1;
        for(int i=0;i<mat.size();i++){
            if(mat[i][mid]>maxi) {
                maxi=mat[i][mid];
                index=i;
            }
        }return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int start=0;
        int end=mat[0].size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int maxRowIndex=max(mat,mid);
            int left=(mid-1>=0) ? mat[maxRowIndex][mid-1] : -1;
            int right=(mid+1 < mat[0].size()) ? mat[maxRowIndex][mid+1] : -1;
            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) return {maxRowIndex,mid};
            else if(mat[maxRowIndex][mid] < left) end=mid-1;
            else start=mid+1;
        }
        return {-1,-1};
    }
};