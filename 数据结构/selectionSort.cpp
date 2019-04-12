// 每一趟i从后面的n-i+1个待排序对象中选出关键字最小的对象
// 作为有序对象序列的第i个对象
void selectSort(int r[], int n) {
    for(int i=0;i<n;i++) {
        int index = i;
        for(int j=i+1;j<n;j++) {
            if(r[j]<r[index]) index = j;
        }
        if(index!=i) {
            int tmp = r[i];
            r[i] = r[index];
            r[index] = tmp;
        }
    }
}