# binary search upper bound
# can also be used via std::upper_bound

int upper_bound(int n, vector<int> &a, int x){
    int l = -1, r = n; // imagine adding -inf to leftmost and inf to rightmost to fix boundary  
    int m; 
    int ans = n; // n => return a.end()
    while (r - l > 1){
        m = (l + r) / 2;
        if (a[m] <= x){
            l = m; 
        }
        else {
            ans = m;
            r = m;
        }
    }
    return ans
}
# lower_bound just change condition from "(a[m] <= x)" to "(a[m] < x)"