// Last updated: 11/22/2026, 9:48:06 AM
class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        string output;
        size_t i = 0;
        while (i < word1.size() && i < word2.size())
        {
            output += word1[i];
            output += word2[i];
            i++;
        }
        output += word1.substr(i); // empty if word1 is already used up
        output += word2.substr(i);
        return output;
    }
};