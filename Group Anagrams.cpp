#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupanagram(vector<string>& str)
{
    unordered_map<string,vector<string>>mp;
    int n=mp.size();
    for(int i=0;i<n;i++){
        string temp=str[i];
        sort(str[i].begin(),str[i].end());
        mp[str[i]].push_back(temp);
    }
    vector<string>v;
    for(auto i:mp){
        v.push_back(i.second);
    }
    return v;

}

































