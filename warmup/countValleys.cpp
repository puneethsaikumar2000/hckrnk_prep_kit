#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	if (s[i] == 'U'){
            l += 1;
        }
        else{
            if (l == 0)
                ans += 1;
            l -= 1;
        }

    }
    cout << ans << endl;
    return 0;
}

