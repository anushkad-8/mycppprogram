#include<iostream>
using namespace std;

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int prod[3][3];

    
    cout << "Enter elements for matrix 1: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for matrix 2: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            prod[i][j] = 0;
        }
    }

    
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            for (int k = 0; k < 3; ++k) 
            {
                prod[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

   
    cout << "The product matrix is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << prod[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
