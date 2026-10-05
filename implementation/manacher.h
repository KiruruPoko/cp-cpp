vector<int> manacher(string &s){
    string ms = "$";
    for (char c: s){
        ms.push_back(c);
        ms.push_back('$');
    }
    vector<int> R(sz(ms));
    int i = 0, j = 0; 
    while (i < sz(ms)){
        while (i - j >= 0 && i + j < sz(ms) && ms[i - j] == ms[i + j]) ++j; 
        R[i] = j; 
        int k = 1; 
        while (i - k >= 0 && k + R[i - k] < j) {
            R[i + k] = R[i - k];
            ++k; 
        }
        i += k, j -= k; 
    }
    return R; 
}

//sz = (int)(x).size()

// used for finding longest palindrome substring.