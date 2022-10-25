class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;
        for(auto it = 0 ; it < word1.size() ; it++ ) str1 += word1[it];
        for(auto it = 0 ; it< word2.size() ; it++ ) str2 += word2[it];
        if(str1.size() != str2.size()) return false;  
        for(int i = 0 ; i< str1.size() ; ++i){
            if(str1[i] != str2[i]) return false;
        }
        return true;
    }
};