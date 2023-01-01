class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int words=0;
        for(int i=0; s[i]; i++){
            if(s[i] == ' '){
                words++;
            }
        }
        words += 1;
        if(words != pattern.size()){
            return false;
        }
        
        unordered_map<char, string> u1;
        unordered_map<string, char> u2;
        vector<string> v;
        string tmp = "";
        
        for(int i=0; s[i]; i++){
            if(s[i] != ' '){
                tmp += s[i];
            }
            else{
                v.push_back(tmp);
                tmp = "";
            }
        }
        v.push_back(tmp);
        
        for(int i=0; pattern[i]; i++){
            if(u1.find(pattern[i]) == u1.end() && u2.find(v[i]) == u2.end()){
                u1[pattern[i]] = v[i];
                u2[v[i]] = pattern[i];
            }
            else if(u2.find(v[i]) != u2.end() && u1.find(pattern[i]) != u1.end()){
                if(u1[pattern[i]] != v[i])
                    return false;
                if(u2[v[i]] != pattern[i])
                    return false;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
