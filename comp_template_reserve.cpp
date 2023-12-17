// https://codeforces.com/contest/1854/standings/participant/160328461#p160328461
// https://chat.openai.com/share/50921631-b0c5-4eff-833c-d556b8ba89d4
#include <bits/stdc++.h> 

using namespace std;
 
using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;
// using i128 = __int128;
 
template <class T>
constexpr T infty = 0;
template <>
constexpr int infty<int> = 1'000'000'000;
template <>
constexpr ll infty<ll> = ll(infty<int>) * infty<int> * 2;
template <>
constexpr u32 infty<u32> = infty<int>;
template <>
constexpr u64 infty<u64> = infty<ll>;
// template <>
// constexpr i128 infty<i128> = i128(infty<ll>) * infty<ll>;
template <>
constexpr double infty<double> = infty<ll>;
template <>
constexpr long double infty<long double> = infty<ll>;
 
#define INF_LL infty<ll>
#define INF_INT infty<int>
#define inf_ll infty<ll>
#define inf_int infty<int>

constexpr int32_t INF_INT32 = INT32_MAX; // Typically, INT32_MAX from <cstdint>
constexpr int64_t INF_INT64 = INT64_MAX; // Typically, INT64_MAX from <cstdint>
constexpr uint32_t INF_UINT32 = UINT32_MAX; // Typically, UINT32_MAX from <cstdint>
constexpr uint64_t INF_UINT64 = UINT64_MAX; // Typically, UINT64_MAX from <cstdint>
constexpr int32_t INF_INT32 = 2147483647; // 2^31 - 1
constexpr int64_t INF_INT64 = 9223372036854775807LL; // 2^63 - 1
constexpr uint32_t INF_UINT32 = 4294967295U; // 2^32 - 1
constexpr uint64_t INF_UINT64 = 18446744073709551615ULL; // 2^64 - 1

constexpr ll LINF=0x1fffffffffffffff;
constexpr ll MINF=0x7fffffffffff;
constexpr int INF=0x3fffffff;
constexpr int INFF = 0x3f3f3f3f;
constexpr int MOD=1000000007;
constexpr int MODD=998244353;

#define REP(i,a,b) for (int i = a; i <= b; i++)

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


}