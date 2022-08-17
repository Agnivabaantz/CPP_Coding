#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void print(Node *n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    
}

void push(Node **head, int val){
    Node *n = new Node();
    n->data = val;

    n->next = *head;
    *head = n;
}

void enqueue(Node **head,int val){
    Node *n = new Node();
    n->data = val;

    if(*head == NULL){
        *head = n;
    }
    else{
        Node *prev = new Node();
        prev = *head;
        while(prev->next != NULL){
            prev = prev->next;
        }
        prev->next = n;
    }
}

void deleteNode(Node **head,int key){
    Node *temp = *head;
    Node *prev = new Node();

    if(temp != NULL && temp->data == key){
        *head = temp->next;
        delete temp;
        return;
    }
    else{
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL)return;

        prev->next = temp->next;
        delete temp;
    }
}

Node* reverse(Node** head){
    vector<int> v;
    Node *i = *head;
    while (i != NULL)
    {
        v.push_back(i->data);
        i = i->next;
    }

    i = *head;
    int j = v.size()-1;
        while (i != NULL)
    {
        i->data = v[j];
        i = i->next;
        j--;
    }
return *head;    
}

Node* reverseIterative(Node **head){
    Node *p = *head;
    if(*head == NULL){
        return *head;
    }
    else if(p->next == NULL){
        return *head;
    }
    else{
        Node* prev = NULL;
       while (p!=NULL)
       {
           Node* next= p->next;
           p->next = prev;
           prev = p; 
           p = next;
       }
       return prev;
    }
}
//Driver code
int main(){
    Node *head = NULL;

    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    enqueue(&head,5);

    //deleteNode(&head,4);

    print(head);
    cout<<endl;
    head = reverseIterative(&head);
    print(head);
    return 0;
}