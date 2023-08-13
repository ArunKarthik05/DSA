class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string merged;
           int i = 0, j = 0;
    while (i < word1.length() || j < word2.length()) {
        if (i < word1.length()) {
            merged += word1[i++];
        }
        
        if (j < word2.length()) {
            merged += word2[j++];
        }
    }
    
    return merged;
}
};
