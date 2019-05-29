#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) {
        string res = "";
        int m = num1.size(), n = num2.size();
        vector<int> vals(m + n);
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1, sum = mul + vals[p2];
                vals[p1] += sum / 10;
                vals[p2] = sum % 10;
            }
        }
        for (int i=0;i<vals.size();i++) {

                cout<<vals[i];
            if (!res.empty() || vals[i] != 0) res.push_back(vals[i] + '0');
        }
        cout<<endl;
        return res.empty() ? "0" : res;
    }

    int main()
    {
        cout<<multiply("150","12237")<<endl;
    }
