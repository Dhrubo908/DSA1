#include<stdio.h>




    int linear(int A[],int n, int key){
    {
int i;
        for(int i=0; i<n; i++)
        {
            if(A[i]==key)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int A[100],n,key,i,result;
    printf("For how many Array");
    scanf("%d",&n);
    printf("Array value");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Which keyword you find?");
    scanf("%d",&key);

    result= linear(A,n,key);
    if(result!=-1)
    {
        printf("find the position of key %d",result);
    }


    return 0;

}

