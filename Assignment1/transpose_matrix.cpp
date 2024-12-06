#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int tarr[3][3];

cout<<"Enter matrix elements"<<endl;

for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

cout<<"The transposed matrix is: "<<endl;

for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
     return 0;
}
