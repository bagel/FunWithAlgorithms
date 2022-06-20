#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<string>& result, string current, size_t left, size_t right, size_t n) {
    if (current.size() == n * 2) {
        result.push_back(current);
        return;
    }
    if (left < n) {
        current.push_back('(');
        dfs(result, current, left + 1, right, n);
        current.pop_back();
    }
    if (right < left) {
        current.push_back(')');
        dfs(result, current, left, right + 1, n);
        current.pop_back();
    }
    return;
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    dfs(result, "", 0, 0, n);
    return result;
}

int main() {
    vector<string> result = generateParenthesis(3);
    for (auto r : result) {
        cout << r << ",";
    }
    cout << endl;
    return 0;
}
