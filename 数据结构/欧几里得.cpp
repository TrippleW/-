int gcd(int m, int n) {
    int t, r;
    if(m<n) {           // 确保m为大数
        t = m;
        m = n;
        n = t;
    }
    while((m%n)!=0) {
        r = m%n;
        m = n;
        n = r;
    }
    return n;
}