#include <bits/stdc++.h>

using namespace std;


vector<string> weightedUniformStrings(string s, vector<int> queries) {
vector<int> weight;
int current_weight = 0;
for (int i = 0; i < s.size(); i++){
    int char_value = s[i] - 'a' +1;
    if (i > 0 && s[i] == s[i-1]){ // vừa nhận i = 0, vừa không tràn: s.size()+1)
        current_weight += char_value;
    } else {
        current_weight = char_value;
    } // lấy current weight làm bên thứ 3. Nếu trùng: + thêm a, nếu không trùng, current_weight = a;
    weight.push_back(current_weight);// chỉ trả lại giá trị đang xét
}
vector<string> result;
for (int i = 0; i < queries.size(); i++){
    int x = queries[i];
    bool found = false;
    for (int j = 0; j < weight.size(); j++){
        if (weight[j] == x){
            found = true;
            break;
        }
    }
    if (found == true){
        result.push_back("Yes");
    } else {
        result.push_back("No");
    }
}
return result;
}
/*
for (int i = 0; i < s.size(); i++){
    char kytu = s[i];
    int fat;
    if (kytu >= 'a' && kytu <= 'z'){
        fat = kytu - 'a' + 1;
        p.push_back();
    }
    // bây giờ muốn có: 1 vòng tổng quát, để mà chạy x lần ứng
    //biến với cả mỗi lần sẽ được tăng lên + a so với lần trước
    for (int j = i; j < (s.size()-1); j++){
        if (s[j] == s[j+1]){
            s[j+1] += fat;
        }
    }

}


*/
int main()
{
    return 0;
}
