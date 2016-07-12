//快速排序
void QuickSort(int a[], int L, int R)
{
    if(L<R)
    {
        int i=L, j=R, temp=a[i];
        while(i<j)
        {
            //从右向左找小于基准值a[i]的元素
            while(i<j && a[j]>=temp)
                j--;
            if(i<j)
                a[i++]=a[j];
            //从左向右找大于基准值a[i]的元素
            while(i<j && a[i]<temp)
                i++;
            if(i<j)
                a[j--]=a[i];
        }
        //将基准值填入最后的坑中
        a[i]=temp;
        //递归调用，分治法的思想
        QuickSort(a, L, i-1);
        QuickSort(a, i+1, R);
    }
}
