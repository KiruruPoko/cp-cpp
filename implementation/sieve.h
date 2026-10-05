bool sieve(int n){
    int cnt = 0;
    if (n <= 1) return false;
    else {
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0) cnt++;
        }
        if (cnt > 0) return false;
        else return true;
    }
}
