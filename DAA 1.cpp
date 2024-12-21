#include <iostream>
#include <vector>
using namespace std;
int binomialCoefficient(int n, int k) {
    vector<vector<int> > dp(n + 1, vector<int>(k + 1, 0)); 
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;  // nC0 = 1
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    return dp[n][k];
}
int main() {
    int n = 8, k = 8;
    cout << "Binomial Coefficient C(" << n << ", " << k << ") = " << binomialCoefficient(n, k) << endl;
    return 0;
}


