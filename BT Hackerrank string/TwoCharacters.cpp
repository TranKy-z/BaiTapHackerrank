#include <bits/stdc++.h>
using namespace std;

int alternate(string s) {
vector<char> uniques;
bool check[26] = {false};
for (int i = 0; i < s.size(); i++){
    int index = s[i] - 'a';
    if (check[index] == false){
        check[index] = true;
        uniques.push_back(s[i]);
    }
}
int max_len = 0;
for (int i = 0; i< uniques.size(); i++){
    for (int j = i + 1; j < uniques.size(); j++){
        char c1 = uniques[i];
        char c2 = uniques[j];
        string temp ="";
        for (int k = 0; k< s.size(); k++){
            if (s[k] == c1 || s[k] == c2){
                temp.push_back(s[k]);
            }
        }
        //temp = "abbababababaaaabbb";
        bool ktra = true;
        for (int l = 0; l < (int)temp.size() - 1; l++){
            if ( temp[l] == temp[l+1]){
                ktra = {false};
                break;
            }
        }
        if (ktra == true){
            if (temp.size() > max_len){
                max_len = temp.size();
            }
        }
    }
}
return max_len;

}

int main(){
string s;
    cout << "Nhap chuoi can kiem tra: ";
    cin >> s;
    // Nếu chuỗi có dấu cách thì dùng: getline(cin, s);

    int ketQua = alternate(s);

    cout << "Ket qua do dai lon nhat la: " << ketQua << endl;

    return 0;
}
