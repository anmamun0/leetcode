#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int, int> couple;
#define  str string
#define  X first
#define  Y second
#define  pb push_back
#define  all(x) x.begin(),x.end() 
#define  testCase int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
 

int main()
{
  /* _Coder   : anmamun0
     _Created : 03 May 2025 ||  00:44:16
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "abbaxc";
    int n = s.size();
 
    for(int len = n; len > 0; len--) 
    {
        for (int i = 0; i < (n-len+1) ; i++)
        {
            string t = s.substr(i, len);
            cout << t << endl;
        } 
    }

    
    checkmate 0;
}


/*

abbaxc
abbax
bbaxc
abba
bbax
baxc
abb
bba
bax
axc
ab
bb
ba
ax
xc
a
b
b
a
x
c

*/