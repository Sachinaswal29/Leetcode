class Solution {
private:
    void merge(vector<int>& nums, int start, int end, int mid){
        int i=start,j=mid+1,k=0;
        vector<int>temp(end-start+1,0);
        while(i<=mid && j<=end)
            temp[k++]=nums[i]<nums[j] ? nums[i++] : nums[j++];
        while(i<=mid) temp[k++]=nums[i++];
        while(j<=end) temp[k++]=nums[j++];
        for(int i=0;i<end-start+1;i++) nums[i+start]=temp[i];
    }
    void mergeSort(vector<int>&nums, int start, int end){
        if(start<end){
            int mid=start+(end-start)/2;
            mergeSort(nums,start,mid);
            mergeSort(nums,mid+1,end);
            merge(nums,start,end,mid);
        }
    }
    
    int partition(vector<int>& nums, int start, int end){
        int mid = start + (end - start) / 2;
        swap(nums[mid], nums[end]);
		
        int pivot = nums[end];
        int j = start;
        for (int i = start; i < end; ++i) {
            if (nums[i] < pivot) {
                std::swap(nums[i], nums[j]);
                ++j;
            }
        }
        swap(nums[j], nums[end]);
        return j;
    }
    void quickSort(vector<int>&nums, int start, int end){
        if(start<end){
            int partitionIndex=partition(nums,start,end);
            quickSort(nums,start,partitionIndex-1);
            quickSort(nums,partitionIndex+1,end);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        //Using STL
        // sort(nums.begin(),nums.end());
        // return nums;
        
        // Counting Sort
        // unordered_map<int,int>freq;
        // for(auto& num:nums) freq[num]++;
        // int maxi=*max_element(nums.begin(),nums.end());
        // int mini=*min_element(nums.begin(),nums.end());
        // int j=0;
        // for(int i=mini;i<=maxi;i++){
        //     while(freq[i]--){
        //         nums[j++]=i;
        //     }
        // }
        // return nums;

        // Using merge sort
        // mergeSort(nums,0,nums.size()-1);
        // return nums;

        // Using quick sort
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};