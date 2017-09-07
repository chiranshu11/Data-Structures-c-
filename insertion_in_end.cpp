#include<iostream>
using namespace std;

class node
{
public :
    int data;
    node *next;
};
class node2
    {
    public :
        int n=0;
        node *temp;
        node *newnode;
        node *start;
        void create_node()
        {
            newnode= new node();
            cin>>newnode->data;
            newnode->next=NULL;

        }

        void insertion()
        {
            start=NULL;
            cout<<"Enter no.of elements";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                create_node();
                if(start==NULL)
                {
                    start=newnode;
                }
                else
                {
                    temp=start;
                    while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=newnode;
                }
            }
        }

        void display()
        {
            temp=start;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    };


int main()
{
    node2 list;
    list.insertion();
    list.display();
}
