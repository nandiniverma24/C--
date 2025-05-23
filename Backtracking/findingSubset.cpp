#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subset(const string &str, int index, vector<string> &ans) {
    if (index == str.size()) {
        ans.push_back("");
        return;
    }

    subset(str, index + 1, ans);

    int n = ans.size();
    for (int i = 0; i < n; i++) {
        ans.push_back( str[index] + ans[i]);
    }
}

int main() {
    string str;
    cin>>str;
    vector<string> ans;
    subset(str, 0, ans);

    for (auto s : ans) {
        cout << s << endl;
    }
}
