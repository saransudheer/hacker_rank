#include <stdio.h>
    #include <vector>
    #include <map>
    #include <set>
     
    using namespace std;
     
    vector<int> v;
    map<int, int> dp;
     
    int grundy(int s)
    {
        if( dp.find(s) != dp.end() )
            return dp[s];
        else
        {
            set<int> go;
            
            for(int i = 1; (s>>i) > 0; i++)
                go.insert(grundy((s>>i)|((((1<<i)-1))&s)));
     
            int ans = 0;
            for(; go.find(ans) != go.end(); ans++);
     
            dp[s] = ans;
            return ans;
        }
    }
     
    int main()
    {
        int n;
        scanf("%d", &n);
     
        int ans = 0;
        v = vector<int>(50000, 1);
     
        set<int> big;
        for(int i = 0; i < n; i++)
        {
            int t;
            scanf("%d", &t);
     
            for(int j = 2; j < v.size() && t > 1; j++)
            {
                int cnt = 0;
                for(; t%j == 0; t /= j, cnt++);
                v[j] |= (1<<cnt);
            }
     
            if( t != 1 )
                big.insert(t);
        }
     
        for(int i = 0; i < v.size(); i++)
            ans ^= grundy(v[i]);
     
        ans ^= (big.size()&1);
        puts(ans == 0? "Dilan" : "Milan");
     
        return 0;
    }
