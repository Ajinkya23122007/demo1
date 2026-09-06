bool iscircularlist(node* head){
    //empty list
    if(head==NULL){
        return true;

    }
    node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;

    }
    if(temp==NULL){
        return true;
    }

    return false;
}

int mian(){
    node* tail=NULL;

    if(iscircularlist(head)){
        cout<<"linked list is cirlular is nature";
    }
    else{
        cout<<"not circular linked list";
    }

}