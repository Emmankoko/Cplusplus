#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void print(vector<int> &a){
    cout<<"{";
    for(int i=0; i<a.size(); i++)
        cout<<a[i];
    cout<<"}";
}

permute(vector<int>& a,int start,int last){
    if(start==last){
        print(a);
    }
    else
            {
            for(int i=start; i<last; i++){
                 swap(a[start], a[i]);
    permute(a, start+1, last);
    swap(a[start],a[i]);

            }

    }


}


int main()
{
    vector<int> list{1,2,3};
  permute(list, 0,3);
  cout<<endl;
 while(next_permutation(begin(list),end(list))){
        print(list);
        cout<<endl;
    }


    return 0;
}
