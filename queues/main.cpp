#include <iostream>

using namespace std;
int queue[100], n = 100, front = -1, rear = -1;
void insert()
{
    int val;
    if(rear == n-1)
        cout<<"queue overflow"<<endl;
    else
    {

            front = 0;
        cout<<"insert the element in queue"<<endl;
        cin>>val;
        rear++;
        queue[rear] = val;
    }
}

void Delete()
{
    if(front == -1 || front > rear)
        cout<<"queue underflow"<<endl;
    else
    {
       cout<<"element deleted from the queue is "<< queue[front];

    }
           front++;


}
display()
{
    if (front == -1)
        cout<<"Queue is empty";
    else
        cout<<"Queue elements are..";
    {
        for(int i = front; i<=rear; i++)
            cout<<queue[i];
            cout<<endl;
    }
}
int main()
{
    insert();
    insert();
    insert();
    display();
    Delete();
    cout<<endl;
    display();
    return 0;
}
