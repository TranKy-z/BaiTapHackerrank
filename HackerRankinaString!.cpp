#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
string tar = "hackerrank";
string m ="";
int j = 0;
for (int i = 0; i < s.size(); i++){
    if (j < tar.size() && s[i] == tar[j]){
        m += tar[j];
        j++;
    }
}
if (m == "hackerrank"){
    return "YES";
} else {
    return "NO";
}
}


int main()
{
}
