#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2) {
        string res="";
        int l1=num1.size(),l2=num2.size();
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int c=0;
        for(int i=0;i<max(l1,l2);i++)
        {
            int x=(i<l1)?num1[i]-'0':0;
            int y=(i<l2)?num2[i]-'0':0;
            int sum=x+y+c;
            c=0;
            if(sum>9)
            {
                res.push_back((sum%10)+'0');
                c=sum/10;
            }
            else
            {
                res.push_back(sum+'0');
            }
        }
        if(c)
        {
            res.push_back(c+'0');
        }
        reverse(res.begin(),res.end());
        return res;
    }
int main()
{
    cout<<addStrings("123","45")<<endl;
}
