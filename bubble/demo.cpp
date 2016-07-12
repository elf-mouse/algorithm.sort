//冒泡排序
void BubbleSort(int a[], int n)
{
    int i, j;
    for(i=0; i<n; i++)
        //j的起始位置为1，终止位置为n-i
        for(j=1; j<n-i; j++)
            if(a[j]<a[j-1])
                Swap(a[j-1], a[j]);
    PrintDataArray(a, n);
}
