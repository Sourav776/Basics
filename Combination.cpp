#include<bits/stdc++.h>
using namespace std;

map<char, int> mp;
vector<char> v;
set<string> st;
set<string> ::iterator it;

int main()
{
    char s[] = {'a', 'a', 'z', 'd', 'e', 'f', '\0'};

    sort(s, s+6);
    string a;

    for(int i = 1; i < (1<<6); i++){
        int cnt = 0;
        for(int j = 0; j < 31; j++){
            if(i & (1<<j))
            {
                if(!mp[s[j]]){
                    cnt++;
                    v.push_back(s[j]);
                }
                mp[s[j]]++;
            }
        }
        mp.clear();
        if(cnt == 3){
            a="";
            for(int j = 0; j < v.size(); j++){
                a += v[j];
            }
            st.insert(a);
            cnt=0;
        }
        v.clear();
    }



    for(it = st.begin(); it != st.end(); it++){
        cout << *it << endl;
    }


    return 0;
}
