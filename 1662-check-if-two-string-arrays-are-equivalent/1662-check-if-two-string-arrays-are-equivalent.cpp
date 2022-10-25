class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;
        for(auto it = word1.begin() ; it != word1.end() ; it++ ){
            str1 += *it;
        }
        for(auto it = word2.begin() ; it != word2.end() ; it++ ){
            str2 += *it;
        }
        if(str1.size() != str2.size()) return false;  
        for(int i = 0 ; i< str1.size() ; ++i){
            if(str1[i] != str2[i]) return false;
        }
        return true;
    }
};