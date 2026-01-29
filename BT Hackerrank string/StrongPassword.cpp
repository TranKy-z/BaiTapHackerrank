#include <bits/stdc++.h>

using namespace std;


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
}
