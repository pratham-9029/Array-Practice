#include<iostream>
using namespace std;

int main()
{
    int i,arr[5];

    for(i=0; i<5; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> arr[i];
    }

    cout << "-------------------------" << endl;

    cout << "array element is : ";
    for(int var : arr)
    {
        cout << var << " ";
    }
    return 0;
}