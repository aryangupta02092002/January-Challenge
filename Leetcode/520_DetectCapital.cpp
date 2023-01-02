class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0, flag;
        for(int i=0; i<word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                count++;
                flag = i;
            }
        }
        if((flag==0 && count==1) || count == word.size() || count==0)
            return true;
        return false;
    }
};
