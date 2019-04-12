// 希尔排序
// 将相距某个“增量”的记录组成一个子序列
// d[1] = n/2  d[i+1] = d[i]/2
// r[0]开始
void shellSort(int r[], int n) {
    for(int d=n/2;d>=1;d=d/2) {
        for(int i=d;i<n;i++) {
            int j = i-d;
            int tmp = r[i];
            while(tmp<r[j] && j>=0) {
                r[j+d] = r[j];
                j = j-d;
            }
            r[j+d] = tmp;
        }
    }
}