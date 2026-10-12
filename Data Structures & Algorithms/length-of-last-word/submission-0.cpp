class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        return words.back().size();
    }
};