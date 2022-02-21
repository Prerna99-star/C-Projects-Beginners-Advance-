#include <iostream>
#include<math.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1\n";
        return 0;
    }
    int rb=0;
    int mx=-1;
    for(int i=1; i<n; i++)
    {
        if(a[i]>mx && a[i+1]<a[i])
        {
             rb++;
        }
        mx = max(mx, a[i]);
    }
        
    cout<<rb;
    return 0;
}
