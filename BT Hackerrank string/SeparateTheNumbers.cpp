#include <bits/stdc++.h>
using namespace std;
string separateNumbers(string s) {
    for (int i = 1; i <= s.size()/2; i++){
        string temp = s.substr(0, i);
        long long num = stoll(temp);
        long long firstnumVal = num;
        string p = temp;
        while (p.size() < s.size()){
            num++;
            p += to_string(num);
        }
        if (p == s){
            cout << "YES " << firstnumVal << endl;
        }
    }
    cout << "No";
}

int main() {
    int q; cin >> q;
    while (q--) {
        string s; cin >> s;
        cout << separateNumbers(s) << endl;
    }
}
