//merge两个有序数列为一个有序数列
void MergeArr(int a[], int first, int mid, int last, int temp[])
{
    int i = first, j = mid+1;
    int m = mid, n = last;
    int k=0;
    //通过比较，归并数列a和b
    while(i<=m && j<=n)
    {
        if(a[i]<a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    //将数列a或者b剩余的元素直接插入到新数列后边
    while(i<=m)
        temp[k++] = a[i++];
    while(j<=n)
        temp[k++] = a[j++];

    for(i=0; i<k; i++)
        a[first+i] = temp[i];
}

//归并排序
void MergeSort(int a[], int first, int last, int temp[])
{
    if(first<last)
    {
        int mid = (first+last)/2;
        MergeSort(a, first, mid, temp);
        MergeSort(a, mid+1, last, temp);
        MergeArr(a, first, mid, last, temp);
    }
}
