#include <iostream>
using namespace std;

void func(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind;
        min_ind = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
            min_ind = j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
    for(int j=0;j<n;j++)
        cout<<arr[j]<<' ';
}

int main()
{
    int num;
    cout<<"Enter number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements : ";
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Array after sorting : ";
    func(arr,num);
    return 0;
}
