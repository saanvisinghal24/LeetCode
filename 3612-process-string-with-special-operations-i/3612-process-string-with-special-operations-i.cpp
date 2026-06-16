class Solution {
public:
    string processStr(string s) {
        string result="";
        int size=0;
        for(char c:s){
            if(c=='*'){
                if(result.length()){
                    result.pop_back();
                }
            }
            else if(c=='#'){
                result+=result;
            }
            else if(c=='%'){
                reverse(result.begin(),result.end());
            }
            else{
                result+=c;
            }
        }
        return result;
    }
};