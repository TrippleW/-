// 每一步将一个待排序对象，按其关键字大小，
// 插入到前面已经排好序的一组对象的适当位置上，
// 直到对象全部插入为止

// r[0]存储 升序
void insertSort(int r[], int n) {
    for(int i=2;i<=n;i++) {
        r[0] = r[i];
        int j = i-1;
        while(r[0]<r[j]) {
            r[j+1] = r[j];
            j--; 
        }
        r[j+1] = r[0];
    }
}