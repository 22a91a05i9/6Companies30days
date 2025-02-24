class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp1,mp2;
        map<char,char>::iterator itr1,itr2;
        for(int i=0;i<s.size();i++)
        {
            itr1=mp1.find(s[i]);
            itr2=mp2.find(t[i]);
            if(itr1!=mp1.end() || itr2!=mp2.end())
            {
                if(itr2->second!=s[i] && itr1->second!=t[i])
                {
                    return false;
                }
            }
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
    }
};