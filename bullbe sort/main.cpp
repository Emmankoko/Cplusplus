#include <iostream>

using namespace std;

int main()
{
    int arrayyyy[5]={5,1,4,2,8};
    for(int i =0; i<sizeof(arrayyyy); i++)
    {
        for(int j=1; j<sizeof(arrayyyy)-1; j++)
        {
            if(arrayyyy[j-1]<arrayyyy[j])
            {
                int temp= arrayyyy[j-1];
                arrayyyy[j-1]=arrayyyy[j];
                arrayyyy[j]=temp;
            }
        }
    }
    for(int k=0; k<sizeof(arrayyyy); k++)
        cout<<arrayyyy[k];

    return 0;
}
