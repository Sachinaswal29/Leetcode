class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>ans;
        for(auto& fldr:folder){
            if(ans.empty()){
                ans.push_back(fldr);
                continue;
            }
            string parentFolder=ans[ans.size()-1];
            if(fldr.substr(0,parentFolder.size()+1)!=parentFolder+'/') ans.push_back(fldr);
        }
        return ans;
    }
};