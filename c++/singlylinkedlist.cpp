#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;


    //constructor
    node(int data){
        this ->data=data;
        this ->next=next;

    }

};    
void insertathead(node* &head,int d){


    //new node create
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

void inserattail(node* &tail,int d){
    //new node create 
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;

}

void insertinpos(node* &tail,node* &head,int position ,int d){

    if(position==1){
        insertathead(head,d);
        return ;
    }

    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp ->next==NULL){
        inserattail(tail,d);
        return ;
    }

    //creating a node for d
    node* nodetoinsert=new node(d);
    nodetoinsert -> next=temp->next;
    temp->next=nodetoinsert;

}

void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

    //created new node

    node* node1=new node(10);
   // cout<<node -> data<<endl;
    //cout<<node1 -> next<<endl;

    //head pointed to node1

    node* head=node1;
    print(head);
    insertnode(head,12);
    print(head);

    return 0;

}