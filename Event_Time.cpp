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
  int id, ih, im, is, ed, eh, em, es;
  string x;
  cin >> x >> id >> ih >> x >> im >> x >> is;
  cin >> x >> ed >> eh >> x >> em >> x >> es;

  int ans = (ed - id) * 24 * 60 * 60 + (eh - ih) * 60 * 60 + (em - im) * 60 + es - is;
  int d = ans / (24 * 60 * 60);
  int h = (ans % (24 * 60 * 60)) / (60 * 60);
  int m = ((ans % (24 * 60 * 60)) % (60 * 60)) / 60;
  int s = ((ans % (24 * 60 * 60)) % (60 * 60)) % 60;

  cout << d << " dia(s)" << nl << h << " hora(s)" << nl << m << " minuto(s)" << nl << s << " segundo(s)" << nl;
}

int32_t main()
{
  // cout << setprecision(2) << fixed;

  // int T;
  // cin >> T;
  // FOR(_, T)
  solve();
  return 0;
}