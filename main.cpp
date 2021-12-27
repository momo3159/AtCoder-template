#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

const ll MOD = 1000000007;

ll modpow(ll a, ll b, ll m) {
  ll ans = 1;
  while (b > 0) {
    if (b & 1) { ans *= a; ans %= m; }
    a *= a; a %= m;
    b >>= 1;
  }
  return ans;
}

int main() {

}
