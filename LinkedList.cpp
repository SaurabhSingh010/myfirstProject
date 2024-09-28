#include<iostream>
#include<string>
using namespace std;

struct node
{
    int data;
    struct node *next;    
};
struct node *start = NULL;
struct node* createlist(struct node *start)
{
    struct node *str;
    str = new node;

    str->data=1;
    str->next = NULL;
    start = str;
    return start;
}

struct node* addatbegin(struct node *start) 
{
    struct node *str;
    str = start;

    struct node *temp = new node;
    temp->data = 10;
    temp->next = str;

    start = temp;
    return start;

    
}

void display(struct node *start)
{
    while(start->next !=NULL)
    {
        cout<< start->data<" "<<endl;
    }
}
int main()

{
    struct node obj;
    

}