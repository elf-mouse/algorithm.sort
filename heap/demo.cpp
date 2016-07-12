//堆排序问题二：如何调整一个堆？
void HeapAdjusting(int a[], int root, int n)
{
    int temp = a[root];
    int child = 2*root+1; //左孩子的位置
    while(child<n)
    {
        //找到孩子节点中较小的那个
        if(child+1<n && a[child+1]<a[child])
            child++;
        //如果较大的孩子节点小于父节点，用较小的子节点替换父节点，并重新设置下一个需要调整的父节点和子节点。
        if(a[root]>a[child])
        {
            a[root] = a[child];
            root = child;
            child = 2*root+1;
        }
        else
            break;
        //将调整前父节点的值赋给调整后的位置。
        a[root] = temp;
    }
}

//堆排序问题一：如何初始化建堆？
void HeapBuilding(int a[], int n)
{
    //从最后一个有孩子节点的位置开始调整，最后一个有孩子节点的位置为(n-1)/2
    for(int i=(n-1)/2; i>=0; i--)
        HeapAdjusting(a, i, n);
}

//堆排序
void HeapSort(int a[], int n)
{
    //初始化堆
    HeapBuilding(a, n);
    //从最后一个节点开始进行调整
    for(int i=n-1; i>0; i--)
    {
        //交换堆顶元素和最后一个元素
        Swap(a[0], a[i]);
        //每次交换后都要进行调整
        HeapAdjusting(a, 0, i);
    }
}
