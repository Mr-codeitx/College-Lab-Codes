#include<bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<char,int> ourmap;
    string str;
    getline(cin,str);
    for(int i = 0; i<str.size(); i++) {
        ourmap[str[i]]++;
    }
    for(auto it = ourmap.begin(); it != ourmap.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

