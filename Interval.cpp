#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define p1 first
#define p2 second
#define vc vector<int>
#define vvc vector<vc>

#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define FOR(i, a) for (int i = 0; i < int(a); ++i)
#define FOR3(i, a, b) for (int i = a; i <= int(b); ++i)
#define FOR4(i, a, b, c) for (int i = a; i <= int(b); i += (c))
#define FOR_R(i, a) for (int i = (a)-1; i >= int(0); --i)
#define FOR3_R(i, a, b) for (int i = (b)-1; i >= int(a); --i)
#define FOR4_R(i, a, b, c) for (int i = (b)-1; i >= int(a); i -= (c))

#define all(x) x.begin(), x.end()
#define len(x) int(x.size())
#define elif else if

#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())

int SUM(vc &A)
{
  int sum = 0;
  for (auto a : A)
    sum += a;
  return sum;
}
void print(vc &A)
{
  for (auto i : A)
    cout << i << " ";
  cout << nl;
}

void solve()
{
  // [0,25] (25,50], (50,75], (75,100]
  double a;
  cin >> a;
  if (a >= 0 && a <= 25)
    cout << "Intervalo [0,25]" << nl;
  elif (a > 25 && a <= 50)
          cout
      << "Intervalo (25,50]" << nl;
  elif (a > 50 && a <= 75)
          cout
      << "Intervalo (50,75]" << nl;
  elif (a > 75 && a <= 100)
          cout
      << "Intervalo (75,100]" << nl;
  else cout << "Fora de intervalo" << nl;
}

int32_t main()
{
  // int T;
  // cin >> T;
  // FOR(_, T)
  // cout << setprecision(5) << fixed;
  solve();
  return 0;
}