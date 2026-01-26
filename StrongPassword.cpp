#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
bool hasDigit = false;
bool hasUpper = false;
bool hasLower = false;
bool hasSpecial = false;
string Special = "!@#$%^&*()-+";
for (int i = 0; i < n; i++){
if (password[i] >= '0' && password[i] <= '9'){
    hasDigit = true;
}
else if (password[i] >= 'A' && password[i] <= 'Z'){
    hasUpper = true;
}
else if (password[i] >= 'a' && password[i] <= 'z'){
    hasLower = true;
}
else {
    hasSpecial = true;
}
}
int loi;
if (hasDigit == false){ loi ++; }
if (hasUpper == false){ loi ++; }
if (hasLower == false){ loi ++; }
if (hasSpecial == false){ loi ++; }
int length_missing;
if (n < 6){
    length_missing = 6- n;
}
if (loi > length_missing){
    return loi;
} else {
    return length_missing;
}
return loi;

    // Return the minimum number of characters to make the password strong
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
