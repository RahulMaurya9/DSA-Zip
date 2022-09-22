class Solution {
public:
    bool isValid(string s) {
        vector<char> data;
        for(auto str : s){
            cout<<"str : "<<str<<endl; 
            if(str =='(' or str == '[' or str == '{'){
                data.push_back(str);
            }
            else{
                if(data.empty() or (data.back() == '[' and str != ']') or (data.back() == '(' and str != ')')
                   or (data.back() == '{' and str != '}')){
                    return false;
                }
                data.pop_back();
            }
        }
        return data.empty();
    }
};