//Longest common subsequence 
/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define endl "\n"
#define N 10000007
#define all(x) x.begin(),x.end()
using namespace std;
int fme(int a,int b){
int res=1;
while(b>0){
if(b&1){
res=(res*a)%N;
}
a=(a*a)%N;
b=b>>1;
}
return res;
}
/*Declare function prototypes here*/
void solve();



/*Declare Global variables here*/
int dp[1001][1001];


/* Main function starts from here */
int32_t main() { 
/*Fast IO*/ 
ios_base::sync_with_stdio(false);cin.tie(NULL);

/*Input-output file creation*/
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout);
#endif

int t=1; 

/*is Single Test case?*/cin>>t;
while(t--)
{ 
solve(); 
cout<<"\n";
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */

int lcs(string a,string b,int n ,int m){
    if(n==0 || m==0) return dp[n][m]=0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(a[n-1]==b[m-1]) return dp[n][m] = 1 + lcs(a,b,n-1,m-1);
    return dp[n][m]=max(lcs(a,b,n-1,m),lcs(a,b,n,m-1));
}




/*Write all function Definition Here */
void solve() { 
    string a,b;
    cin>>a;
    cin>>b;
    int n=a.size();
    int m=b.size();
    memset(dp,-1,sizeof(dp));
    cout<<lcs(a,b,n,m);
    
}