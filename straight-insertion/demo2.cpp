//直接插入法，版本2：搜索和后移同时进行
void StraightInsertionSort2(int a[], int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
        if(a[i] < a[i-1])
        {
            int temp = a[i];
            for(j=i-1; j>=0 && a[j]>temp; j--)
                a[j+1] = a[j];
            a[j+1] = temp;
        }
    PrintDataArray(a, n);
}
