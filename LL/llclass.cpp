#include<iostream> 
using namespace std;

    class node{  // user defined data type
        public:
        int val;
        node* next;
        node(int val){
            this->val=val;
            this->next=NULL;
        }
    };
    class linkedlist{  //user defined data structure
    public:
           node* head; // initoally pointed to null
           node* tail;
           int size;
           linkedlist(){
            head=tail=NULL;
            size=0;
           }
           void insertattail(int val){
            node* temp=new node(val);
            if(size==0) head=tail =temp;
            else{  // size>0
                tail->next=temp;
                tail=temp;
            }
            size++;
           }
            void insertathead(int val){
            node* temp=new node(val);
            if(size==0) head=tail =temp;
            else{
                temp->next=head;
                head=temp;
            }
            size++;
           }
           void insertatidx(int idx,int val){
            
            if(idx<0 || idx>size) cout<<"invalid";
            else if(idx==0)  insertathead(val);
            else if(idx==size)  insertattail(val);
           else{
             node* t= new node(val);
             node* temp=head;
             for(int i=1; i<=idx-1; i++){
                temp=temp->next;
             }
             t->next=temp->next;
             temp->next=t;
             size++;

           }
           }
           void deleteathead(){
            if (size==0) cout<<"inavlid";
            else {    //(size>=1)
                head=head->next;
                size--;
            }
           }
            void deleteattail(){
            if (size==0)
            { cout<<"inavlid";
            return;
            }
            node* temp=head;
            while(temp->next!=tail){
                 temp=temp-> next;
            }
             
                temp->next= NULL;
                tail=temp;
                size--;
            
           }
           void deleteatidx(int idx){
            if(idx<0 || idx>=size){
                cout<<"inalid idx";
                return;
            }
            else if(idx==0) return deleteathead();
            else if(idx==size-1) return deleteattail();
            else{
                 node* temp=head;
                 for(int i=1; i<=idx-1; i++){
                     temp=temp->next;
                 }
                 temp->next=temp->next->next;
                 size--;
             } 
              }
             int getatidx(int idx){
              if(idx<0 ||idx> size) {
                 cout<<"invalid idx";
                 return -1;}

              else if (idx==0) return head->val;
              else if(idx=size-1)  return tail->val;
              
              else{
                node* temp=head;
                for(int i=1; i<=idx; i++){
                    temp=temp->next;
                }
                return temp->val;
              }
              
             }
             void display(){
             node* temp=head;
             while(temp!= NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
             }
             cout<<endl;
           }

    };
       int main(){
        linkedlist ll;
        ll.insertattail(10);
        ll.display();
        ll.insertattail(20);
        ll.display();
        ll.insertathead(50);
        ll.display();
        ll.deleteathead();
        ll.display();
        ll.deleteattail();
        ll.display(); 
       // ll.deleteatidx(1 );
        ll.display();
        ll.insertatidx(0,80);
        ll.display();
        cout<<ll.getatidx(0)<<endl;
       }

