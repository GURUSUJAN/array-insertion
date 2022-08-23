#include"iostream"
using namespace std;
int main()
{
    int n;
    int r=0;
    //cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int o;
   // cout<<"How number of element to insert in to array: "<<endl;
    cin>>o;
    int ar[n];
    int i;
    for(i=0;i<o;i++)
    {
        cin>>ar[i];
    }
    for(i=o;i<n;i++)
    {
        ar[i]=0;
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    int p;
    //cout<<"Enter the number to insert in to array: "<<endl;
    cin>>p;
    if(n>o)
    {
    //cout<<(sum+p)<<endl;
    int q=sum+p;
    r=q/n;
    while(r>n)
    {
        r/=n;
    }
    //cout<<r<<endl;
    }
    if(n==o || n<o)
    {
        cout<<"Insertion is not possible becouse Array Overflow.. !!"<<endl;
        exit(0);
    }
    for(i=n-1;i>=r-1;i--)
      ar[i+1]=ar[i];
   ar[r-1]= p;
   for(i=0;i<n;i++)
      cout<<ar[i]<<"\t";
   return 0;
}
