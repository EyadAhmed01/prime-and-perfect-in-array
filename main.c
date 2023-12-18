#include <stdio.h>
#include <stdlib.h>
int fun(int *a,int n,int *perfect,int *prime )
{

    int i,sum=0,j;
    int m[n];
    for(i=0; i<n; i++)
    {
        m[i]=*(a+i);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<m[i]; j++)
        {
            if(m[i]%j==0 )
                sum=sum+j;
        }
        if(sum==m[i]&& m[i]>0){
            printf("%d is perfect\n",m[i]);
            *perfect=*perfect+1;}
        sum=0;
    }
    int flag;
    flag=0;
for(i=0;i<n;i++)
{
    for(j=2;j<m[i];j++)
    {
        if(m[i]%j!=0)
        {
          flag=1;
        }
        else
            break;
    }
    if(flag==1||m[i]==2){
        printf("%d is prime\n",m[i]);
        *prime= *prime+1;}
    flag=0;
}
}
int main()
{
    int n,i;
    int prime=0;
    int perfect=0;
    printf("size of array is:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    fun(a,n,&perfect,&prime);
    printf("number of perfect numbers is %d and number of prime numbers is %d",perfect,prime);
//a=&a[0]

}
