// 选取一个轴值，通过一趟排序将待排序记录分割成独立的两部分，
// 前一部分记录的关键码小于或等于轴值
// 后一部分记录的关键码均大于或等于轴值
// 然后分别对两部分重复上述方法，直至整个序列有序

int Partition(int r[], int first, int end) {
    int i = first;
    int j = end;
    while(i<j) {
        while( i<j && r[i]<r[j]) j--;  // 从右侧开始扫描
        if(i<j) {
            int tmp = r[i];
            r[i] = r[j];
            r[j] = tmp;
            i++;
        }
        while(i<j && r[i]<r[j]) i++;    // 从左侧开始扫描
        if(i<j) {
            int tmp = r[i];
            r[i] = r[j];
            r[j] = tmp;
            j--;
        }
    }
    return i;           // i为轴值记录的最终位置
}

void QuickSort(int r[], int first, int end) {
    if(first<end) {
        int pivotpos = Partition(r,first,end);
        QuickSort(r,first, pivotpos-1);
        QuickSort(r,pivotpos+1,end);
    }
}

