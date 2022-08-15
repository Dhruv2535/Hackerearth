//Author: Akash Gautam (@geekblower)
//Date: 30-07-2022
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define TEST_CASES create(t);while(t--)
#define SOLUTION solve(); return 0;
#define display(n) cout<<n<<endl;
#define VI vector<int>
#define PB push_back
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a))
#define loop(i,a,b,c) for(int i=a;i<b;i+=c)
#define revloop(i,a,b,c) for(int i=a;i>=b;i-=c)
#define start_loop loop(i,0,n,1)
#define start_revloop revloop(i,n,0,1)
#define create(n) int n;cin>>n;
#define def(a,n) int a[n];start_loop cin>>a[i];
#define print(a) for(auto i : a){cout<<i<<" ";}cout<<endl;
#define vector(a,n) VI a;loop(i,0,n,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 1000000007;
int fact[1000000];

void factorial() {
    fact[0] = 1;
    
    loop(i, 1, 1000000, 1)
        fact[i] = (fact[i-1]%MOD * i%MOD) % MOD;
}

int inv(int x, int n) {
    if(n==0)
        return 1;
    else if(n%2==0)
        return inv((x*x)%MOD, n/2);
    else
        return(x * inv((x*x)%MOD, (n-1)/2)) % MOD;
}

int nCr(int n, int r) {
    if(r>n)
        return 0;
    
    int ans = fact[n];
    int x = (fact[r]%MOD * fact[n-r]%MOD) % MOD;
    ans = (ans%MOD * inv(x, MOD-2)%MOD) % MOD;
    
    return ans;
}

void solve() {
    create(n)
    factorial();
    int res=0;
    
    revloop(i, n, 3, 1) {
        revloop(j, i-2, 1, 2)
            res = (res%MOD + nCr(j+1, 2)%MOD) % MOD;
    }
    
    display(res)
}

int32_t main() {
    GEEKBLOWER
    SOLUTION
}
