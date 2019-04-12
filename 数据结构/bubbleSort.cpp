// 冒泡排序
// 两两比较相邻记录的关键码
// 反序则交换，直到没有反序的记录为止
void bubbleSort(int r[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++) {
            if(r[j]>r[j+1]) {
                int tmp = r[j];
                r[j] = r[j+1];
                r[j+1] = tmp; 
            }
        } 
    }
}