# 数据结构

## 一、Introductiion

### 1、欧几里得算法——辗转相除法

E：两个正整数m，n 且m>n
E1：令 r=m%n
E2：若 r=0 break，n为结果
E3：否则，m=n，n=r，返回E1

``````C++
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
``````

