class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
	for(int i = 0; i < word1.length() || i < word2.length(); i++)
	{
         if(i < word1.length()){
         	str+=word1[i];
         }
         if(i < word2.length()){
         	str += word2[i];
         }
	}
    return str;
    }
};
