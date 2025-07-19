class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>ans;
        for(auto& fldr:folder){
            if(ans.empty() || fldr.compare(0,ans.back().size()+1,ans.back()+'/')!=0) ans.push_back(fldr);
        }
        return ans;
    }
};