class Solution {
public:
    int hIndex(vector<int>& paper) 
    {
        sort(paper.begin(),paper.end()); 
        int n = paper.size();
         
        for(int i = 0; i<n; i++)
        {
            if( n-i <= paper[i] ) return n-i; 
        }  

        return 0;
    }
};


// idx = 5 4 3 2 1
//  v  = 0 1 3 5 6
//  ans = v > v 
// ans = 3
