class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.length()<sentence2.length()) swap(sentence1,sentence2);
        vector<string>sen1,sen2;
        stringstream ss1(sentence1);
        stringstream ss2(sentence2);
        string token="";
        while(ss1>>token) sen1.push_back(token);
        while(ss2>>token) sen2.push_back(token);
        int left=0;
        int right1=sen1.size()-1,right2=sen2.size()-1;
        while(left<sen1.size() && left<sen2.size() && sen1[left]==sen2[left]){
            left++;
        }
        while(right2>=left && sen1[right1]==sen2[right2]){
            right1--;
            right2--;
        }
        return right2<left;
    }
};