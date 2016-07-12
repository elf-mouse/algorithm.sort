//直接插入排序，版本1
void StraightInsertionSort1(int a[], int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
    {
        //找到要插入的位置
        for(j=0; j<i; j++)
            if(a[i] < a[j])
                break;
        //插入，并后移剩余元素
        if(j != i)
        {
            int temp = a[i];
            for(int k=i-1; k>=j; k--)
                a[k+1] = a[k];
            a[j] = temp;
        }
    }
    PrintDataArray(a, n);
}
