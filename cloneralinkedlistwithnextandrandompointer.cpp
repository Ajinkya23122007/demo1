class Solution{
    private:
    void insertattail(node* &head,node* tail,ind d){
        node* newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    public:
    node* copylist(node* head){
        node* clonehead=NULL;
        node* clonetail=NULL;
        node* temp=head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->data)
            temp=temp-next;
        }

        //step2:ceate a map
        unsorted_map<node*,node*>oldtonew;
        node* originalnade=head;
        node* clonenode=clonehead;
        while(originalnade!=NULL && clonenode!=NULL){
            oldtonew[originalnade]=clonenode;
            originalnade=originalnade->next;

        }
        originalnade=head;
        clonehead=clonehead;
        while(originalnade!=node){
            clonenode->random=oldtonew[originalnade->next];
            originalnade=originalnade->next;
            clonenode=clonenode->next;
        }
    }return clonehead;

};