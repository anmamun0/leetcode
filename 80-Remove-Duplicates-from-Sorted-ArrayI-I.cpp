class Solution {
public:
    int removeDuplicates(vector<int>& v) 
    {
        int n = v.size(), k = 2;
        if(n==1) return 1;

        for(int i = 2; i<n; i++)
        {
            if(v[k-2] != v[i])
            {
                v[k++] = v[i]; 
            }
        }
        return k;
    }
};