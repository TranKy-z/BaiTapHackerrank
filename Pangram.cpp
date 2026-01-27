#include <bits/stdc++.h>

using namespace std;


string pangrams(string s) {
vector<char> p;
vector<int> so_diem_danh (26, 0);

for (int i = 0; i < s.size(); i++){
    char kytu = s[i];
    kytu = tolower(kytu);
    if (kytu >= 'a' && kytu <= 'z'){
        int vitri = kytu - 'a';
        so_diem_danh[vitri] = 1;
    }
}
for (int i = 0; i < 26; i++){
    if (so_diem_danh[i] == 0){
        return "not pangram";
    }
}
return "pangram";
}

int main()
{

    return 0;
}
