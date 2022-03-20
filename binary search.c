#include<stdio.h>
int binary(int a[100],int n, int key )
{
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }

        if(a[mid]<key)
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
    return -1;


}


int main()
{

    int a[100],key, i,  n,  result;

    printf("size of array");
    scanf("%d",&n);
    printf("array value");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Find key");
    scanf("%d",&key);

    result= binary(a,n,key);
    if(result!=-1)
    {

        printf("found %d",result);
    }
    else
    {
        printf ("not found");
    }




return 0;


}
