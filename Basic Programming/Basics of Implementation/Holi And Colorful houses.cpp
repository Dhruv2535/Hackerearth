//Author: Akash Gautam (@geekblower)
//Date: 09-08-2022
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
    create(q)
    
    string str;
    cin>>str;
    
    int count,ans;
    
    while(q--) {
        count=0,ans=0;
        
        create(x)
        create(y)
        
        x--;
        y--;
        int x1=x;
        int y1=y;
        
        while(x!=y) {
            x++;
            
            if(x!=n && str[x]!=str[x-1]) {
                count++;
            } else if(x==n) {
                if(str[0]!=str[n-1]) {
                    count++;
                }
                
                if(x==y) {
                    break;
                }
                
                x=0;
            }
        }
        
        while(x1 != y1) {
            x1--;
            
            if(x1!=-1 && str[x1]!=str[x1+1]) {
                ans++;
            } else if(x1==-1) {
                if(str[0]!=str[n-1]) {
                    ans++;
                }
                
                if(x1==y1) {
                    break;
                } else {
                    x1 = n-1;
                }
            }
        }
        
        if(count>ans) {
            display(ans)
        } else {
            display(count)
        }
    }
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}
