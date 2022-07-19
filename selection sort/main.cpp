#include <iostream>

using namespace std;
selection_sort(int *arr)
{
    int n= sizeof(arr);
    for(int i = 0; i< n-1; i++)
    {
        for(int j=i+1; j< n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp= arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
            }
        }

    }
}

bubble_sort(int *arr)
{
    int n=sizeof(arr);
    for()
}

int main()
{
    int arr[]={1,3,4,2,5,6};
    selection_sort(arr);
    for(int i = 0; i<6; i++)
        cout<<arr[i];
    return 0;
}
