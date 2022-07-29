//Author: Akash Gautam (@geekblower)
//Date: 17-07-2022
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

void solve() {
    create(n)
    create(l)
    
    int gv=0, cv=0, gs, cs, a, b=0, ans=0;
    
    string str;
    cin>>str;
    
    loop(i, 0, l, 1) {
        if(str[i]=='G')
            gv++;
        
        if(str[i]=='C')
            cv++;
    }
    
    string str2;
    
    start_loop {
        l=0, gs=0, cs=0;
        cin>>l>>str2;
        
        loop(j, 0, l, 1) {
            if(str2[j]=='G')
                gs++;
            
            if(str2[j]=='C')
                cs++;
        }
        
        a = (gv*cs) + (gs*cv);
        
        if(a>b) {
            b = a;
            a = 0;
            ans = i+1;
        }
    }
    
    display(ans)
}

int32_t main() {
    GEEKBLOWER
    SOLUTION
}
