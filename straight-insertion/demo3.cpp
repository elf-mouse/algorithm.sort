//插入排序，版本3：用数据交换代替版本2的数据后移(比较对象只考虑两个元素)
void StraightInsertionSort3(int a[], int n)
{
    for(int i=1; i<n; i++)
        for(int j=i-1; j>=0 && a[j]>a[j+1]; j--)
            Swap(a[j], a[j+1]);
    PrintDataArray(a, n);
}
