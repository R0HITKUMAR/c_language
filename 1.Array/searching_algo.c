int LinearSearch(int a[10], int n, int ele)
{
    int i,pos;
    for(i=0; i<n; i++)
    {
        if(a[i]==ele)
        {
            pos=i+1;
            printf("Element Found at %d Position",pos);
            break;
        }
    }
    if (i == n)
    {
        printf("Element Not Found");
    }
}
void BinarySearch(int a[10], int n, int ele)
{
    int first, last, mid;
    first = 0;
    last = n - 1;
    mid = (first+last)/2;
    while (first <= last)
    {
        if (a[mid] < ele)
            first = mid + 1;
        else if (a[mid] == ele)
        {
            printf("Element Found at %d Position", mid+1);
            break;
        }
        else
            last = mid - 1;
            mid = (first + last)/2;
  }
  if (first > last)
    printf("Element Not Found");
}
void IndexSeqSearch(int a[10], int n, int ele)
{
    int i,pos,flag=0;
    for(i=0;i<10;i++)
	{
		if(ele==a[i])
        {
            flag=1;
            pos=i+1;
        }
	}
	if(flag==1)
		printf("Element Found at %d Position",pos);
	else
        printf("Element Not Found");

}

void main()
{
    int n,a[100],i,ch,ele;
    printf("Enter No. of Elements  :  ");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to Search  :  ");
    scanf("%d",&ele);
    printf("Enter Your Choice\n");
    printf("1.Linear Search\t2.Binary Search\t3.Index Sequential Search\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1: LinearSearch(a, n, ele);
                break;
        case 2: BinarySearch(a, n, ele);
                break;
        case 3: IndexSeqSearch(a, n, ele);
                break;
        default:printf("\nVoid Choice\n");
                    break;

    }
}
