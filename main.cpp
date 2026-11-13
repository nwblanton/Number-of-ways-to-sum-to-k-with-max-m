// Calculate number of ways to have n items sum to k with maximum m
// time complexity: O(n) (or technically O(n/m) I think with O(n) precomputation)

// n = number of items; m = maximum value; k = total sum
// fct[i] = i! ; fctinv[i] = (i!)^{-1} (mod MOD)
/*
ll mult = 1;
ll ans = 0;
int n, k, m;
vll fct, fctinv;
const ll MOD = 998244353;
for (int j = 0; j <= n; j++) {
    int num = n + k - 1;
    num -= j * (m + 1);
    if (num < n - 1) break;
    ll v1 = (fct[n] * fctinv[j]) % MOD;
    v1 *= fctinv[n - j];
    v1 %= MOD;
    v1 *= fct[num];
    v1 %= MOD;
    v1 *= fctinv[n - 1];
    v1 %= MOD;
    v1 *= fctinv[num - n + 1];
    v1 %= MOD;
    ans += v1 * mult;
    ans %= MOD;
    if (ans < 0) ans += MOD;
    mult *= -1;
}
*/