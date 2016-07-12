//直接选择排序
void StraightSelectionSort(int a[], int n)
{
    int i, j, minIndex;
    for(i=0; i<n; i++)
    {
        minIndex=i;
        for(j=i+1; j<n; j++)
            if(a[j]<a[minIndex])
                minIndex=j;
        Swap(a[i], a[minIndex]);
    }
    PrintDataArray(a, n);
}
