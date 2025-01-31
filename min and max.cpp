#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*newptr,*temp,*ptr,*start;

node* Create(int n)
{
    ptr = new node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}
void Insert(node* np)
{
    if(start == NULL)
    {
        start = np;
    }
    else
    {
        temp = start;
        start = np;
        np->next = temp;
    }
}
void Display(node *np)
{
    ptr = np;
    int high=ptr->data;
    int low=ptr->data;
    while(np!= NULL)
    {


        if(high<np->data)
        {
            high = np->data;
        }
        np = np->next;
    }
    cout<<"The maximum element is \n";
    cout<<high;
    while(np!=NULL)
    {


        if(low>np->data)
        {
            low = np->data;
        }
        np = np->next;
    }
    cout<<"\nThe minimum element is \n"<<low;
}
int main()
{
    start=NULL;
    char ch='y';
    int inf;
    while (ch=='y' || ch=='Y')
    {
    cout<<"Enter the data..\n";
    cin>>inf;
    newptr = Create(inf);
    if(newptr== NULL)
    {
        cout<<"No memory can be allocated";
        break;
    }
    else
    {
        cout<<"Now inserting this node in the beginning of the list...\n";
        Insert(newptr);
    }
    cout<<"Do u wanna continue..\n";
    cin>>ch;
    }
    cout<<"Elements in the lists are :...\n";
    Display(start);
    return 0;

}
