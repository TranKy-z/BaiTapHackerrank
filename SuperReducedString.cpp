#include <bits/stdc++.h>

using namespace std;

string superReducedString(string s) {
string ketQua;
for (int i = 0; i < s.size(); i++){
    if (ketQua.empty()){
        ketQua.push_back(s[i]);
    }
    else if (s[i] == ketQua.back()){
        ketQua.pop_back();
    } else {
        ketQua.push_back(s[i]);
    }

}
if (ketQua.empty()){
    return "Empty String";
} else {
    return ketQua;
}
}

int main()
{
    return 0;
}
