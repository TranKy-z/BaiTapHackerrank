#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;
//Cách pro
string funnyString(string s) {
string r = s;
reverse(r.begin(), r.end());
for (int i = 0; i < size() - 1 i++){
    int diff_s = abs(s[i] - s[i+1]);
    int diff_r = abs(r[i] - r[i+1]);
    if (diff_s != diff_r){
        return "Not Funny";
    }
}
return "Funny";
}
/* Cách Noob
string funnyString(string s) {
vector<int> dayso;
vector<int> daysonguoc;
for (int i = 0; i <= s.size() - 1; i++){
    int kytu;
    int kytunguoc;
    kytu = s[i] - 'a';
    kytunguoc = s[s.size() - 1 - i] - 'a';
    dayso.push_back(kytu);
    daysonguoc.push_back(kytunguoc);
}
for (int j = 0; j < s.size() - 1; j++){
    int diff1 = abs(dayso[j] - dayso[j+1]);
    int diff2 = abs(daysonguoc[j] - daysonguoc[j+1]);
    if (diff1 != diff2){
        return "Not Funny";
    }
}
return "Funny";
*/
}

int main()
{
    return 0;

}
