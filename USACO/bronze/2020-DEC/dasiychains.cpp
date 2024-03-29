#include <bits/stdc++.h>
typedef long long ll;
const int MOD  = 1e9 + 7;
#define x first
#define y second
#define nl '\n';
#define dbg(v)                                                                 \
    std::cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';

void setIO(std::string s) { 
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> flower(n);

    for(int i = 0; i < n; i++) std::cin >> flower[i];

    int ans = 0;

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            if(i > k) continue;
            int sum = 0;
            for(int j = i; j <= k; j++){
                sum += flower[j];
            }
            int total = k - i + 1;
            for(int j = i; j <= k; j++){
                if(flower[j] * total == sum){
                    ans++;
                    break;
                }
            }
        }
    }

    std::cout << ans << nl;
}   



