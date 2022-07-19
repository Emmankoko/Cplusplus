#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node mynode;

mynode *last=NULL;


insertintoempty(int new_data)
{
    if(last!=NULL)
        return last;

    mynode *new_node=(mynode *)malloc(sizeof(mynode));
    new_node->data=new_data;
    last=new_node;
    last->next=last;
    return last;
}


insertfrombegin(int new_data)
{
    mynode *new_node=(mynode *)malloc(sizeof(mynode));
    new_node = last->next;
    new_node->next=last;

}
display()
{
    last=returnlast();
    while(last!=NULL)
    {
        cout<<last->data<<"--";
        last=last->next;
    }
}

int main()
{
    insertfrombegin(5);
    insertfrombegin(4);
    insertfrombegin(2);
    insertfrombegin(1);
    display();
    return 0;
}
