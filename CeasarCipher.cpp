#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k) {
k = k % 26;
bool lakytu = {false};
string p = "";
string m = "";
for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            lakytu = true;
        } else if (s[i] >= 'A' && s[i] <= 'Z'){
            lakytu = true;
        }
        for (int j = 0; j < 26; j++){

        }
        if (lakytu == true){
            if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] += k;
            p[i] = s[i];
            if (p[i] > 'z'){
                p[i] = p[p[i]%26];
            }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += k;
            p[i] = s[i];
            if (p[i] > 'Z'){
                p[i] = p[p[i]%26];
            }
            }
            m.push_back(p[i]);
    }
