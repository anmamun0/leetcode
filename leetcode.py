class Solution:
    def removeDuplicates(self, v: List[int]) -> int:
        n, k  = len(v) , 2

        if n == 1:
            return 1

        for i in range(2,n):
            if v[k-2] != v[i]:
                v[k] = v[i]
                k += 1
                
        return k