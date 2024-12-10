#include<iostream>
using namespace std;

int findMin(int arr[], int size)
{
    int small=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }

    }
    return small;


}

int main()
{

    cout<<"Enter the size of the array!"<<endl;
    int n;
    cin>>n;
    cout<<"Enter "<<n<<"elements in the array!"<<endl;
    int arr[n];
    while(n==1)
    return arr[0];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=findMin(arr,n);
    cout<<"The minimum value in this array is: "<<min<<endl;

}