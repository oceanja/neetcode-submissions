class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        for(auto &word:strs){
            ans+=to_string(word.length());
            ans+='#';
            ans+=word;
        }

        return ans;
    }

    vector<string> decode(string s) {

        int i=0;
        vector<string> ans;

        while(i<s.length()){

            string len="";

            while(s[i]!='#'){
                len+=s[i];
                i++;

            }

            int lengthh=stoi(len);
            i++;

            string word=s.substr(i,lengthh);
            ans.push_back(word);
            i+=lengthh;


        }

        return ans;

    }
};
