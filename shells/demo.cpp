//希尔排序
void ShellSort(int a[], int n)
{
    int i, j, gap;
    //分组
    for(gap=n/2; gap>0; gap/=2)
        //直接插入排序
        for(i=gap; i<n; i++)
            for(j=i-gap; j>=0 && a[j]>a[j+gap]; j-=gap)
                Swap(a[j], a[j+gap]);
    PrintDataArray(a, n);
}
