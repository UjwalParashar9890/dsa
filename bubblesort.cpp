<<<<<<< HEAD
#include<iostream>
using namespace std;

//sort elements in increasing order
void bubble_sort(int a[],int n)
{
    for(int times=1;times<=n-1;times++)
    //reapeted swapping
    for(int j=1;j<=n-times-1;j++)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
}
int main()
{
    int arr[]={8,10,5,50,65,78,99};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<",";
    }
    return 0;
=======
#include<iostream>
using namespace std;

//sort elements in increasing order
void bubble_sort(int a[],int n)
{
    for(int times=1;times<=n-1;times++)
    //reapeted swapping
    for(int j=1;j<=n-times-1;j++)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
}
int main()
{
    int arr[]={8,10,5,50,65,78,99};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<",";
    }
    return 0;
>>>>>>> 51f58286241d6cc7a237f4184ea1c9e98f5154d0
}