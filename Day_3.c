/*Q.NO:3 C PROGRAM TO SORT THE ELEMENTS OF AN ARRAY IN DESCENDING ORDER?
PROGRAM*/
#include<stdio.h>
void  main()
{
    int i,j,n,a[100],temp;
    printf("Enter the number of elements:\n") ;
    scanf("%d",&n) ;
     printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
       for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
       }
    }
    printf("Elements sorted in descending order are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]) ;
    }
}
