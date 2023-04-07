#include <iostream>
#include <vector>

using namespace std;

bool isMatch(string s, string p) {
    int m = s.size(), n = p.size();
    vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
    dp[0][0] = true;
    for (int i = 0; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j-1] == '*') {
                dp[i][j] = dp[i][j-2] || (i > 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && dp[i-1][j]);
            } else {
                dp[i][j] = i > 0 && (s[i-1] == p[j-1] || p[j-1] == '.') && dp[i-1][j-1];
            }
        }
    }
    return dp[m][n];
}

int main() {
    string s, p;
    cin >> s >> p;
    if (isMatch(s, p)) {
        cout << "Match found!" << endl;
    } else {
        cout << "No match found." << endl;
    }
    return 0;
}
/*The isMatch function takes in two strings s and p representing the input string and pattern, respectively. It returns a boolean value indicating whether the input string matches the pattern or not.

The algorithm uses dynamic programming to solve the problem. We define a 2D boolean array dp of size (m+1) x (n+1), where m and n are the lengths of the input string and pattern, respectively. The dp[i][j] entry represents whether the input string up to the i-th character matches the pattern up to the j-th character.

We initialize dp[0][0] to true because an empty string matches an empty pattern. Then we fill in the rest of the dp array using the following recursive formula:

If p[j-1] is *, then either * matches zero occurrences of the preceding character, in which case we look at dp[i][j-2], or * matches one or more occurrences of the preceding character, in which case we look at dp[i-1][j] if the preceding character matches the i-1-th character of s. If either of these conditions is true, then dp[i][j] is true.

If p[j-1] is not *, then we match the j-1-th character of p with the i-1-th character of s. If they match or p[j-1] is ., and the input string up to the i-1-th character matches the pattern up to the j-1-th character, then dp[i][j] is true.

Finally, we return dp[m][n] because we want to know whether the entire input string matches the entire pattern.

The main function takes input of the input string s and pattern p, calls the isMatch function, and prints whether a match is found or not. */
