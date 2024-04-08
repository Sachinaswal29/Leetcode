class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int>v(2,0);
        for(auto &st:students) v[st]++;
        for(int i=0;i<students.size();i++){
            if(v[sandwiches[i]]==0) return students.size()-i;
            v[sandwiches[i]]--;
        }
        return 0;
    }
};