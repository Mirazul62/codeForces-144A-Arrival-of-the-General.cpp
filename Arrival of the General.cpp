#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[100000],count=0,min,max,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];

        min=a[1];
        max=a[1];
        k=1;

    for(i=1;i<=n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            j=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            k=i;

        }

    }
   /// cout<<j<<" "<<k<<endl;
    if(j>k)
    count=(n-j)+(k-1);
    else if(j==n && k==1)
        count=0;
    else
          count=(n-j)+(k-1)-1;
    cout<<count;

}
