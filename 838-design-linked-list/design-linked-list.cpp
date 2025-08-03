class Node
 {
      public:
        int val;
        Node*next;
        Node(int x)
        {
             this->val=x;
             this->next=NULL;
        }
};
class MyLinkedList {
  public:

    Node*head;
    MyLinkedList() 
    { 
        head=NULL;
    }
    
    int get(int index) {
         Node *t=head;
        int len=0;
        while(t)
        {
            len++;
            t=t->next;
        }
        if(index>=len) return -1;
        if(index==0)
        { return head->val;}
        Node *temp= head;
        while(index--)
        {  
             
             temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node*temp=new Node(val);
        if(head==NULL)
        {
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;

    }
    
    void addAtTail(int val) {
        Node *temp=new Node(val);
        if(head==NULL)
        {
             head=temp;
             return ;
        }
        Node *temp2=head;
        while(temp2->next!=NULL)
        {
             temp2=temp2->next;
        }
        temp2->next=temp;
    }
    
    void addAtIndex(int index, int val) {
        Node *newnode=new Node(val);
        if(index==0)
        {
            addAtHead(val);
        }
        else
        {
            Node *t=head;
            int len=0;
            while(t)
            {
                len++;
                t=t->next;
            }
            if(index>len) return;
            index--;
            Node *temp=head;
            while(index--)
            {
             
                 temp=temp->next;
            };
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index==0) 
        {
            if(head==NULL) return;
            head=head->next;
        }
        else
        {
            Node *t=head;
            int len=0;
            while(t)
            {
                len++;
                t=t->next;
            }
            if(index>=len) return;
             Node *prev=NULL;
             Node *curr=head;
             while(index--)
             {
                 prev=curr;
                 curr=curr->next;
             }
             prev->next=curr->next;
             curr->next=NULL;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */