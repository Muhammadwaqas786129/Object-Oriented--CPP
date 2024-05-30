#include <iostream>
using namespace std;
struct node{
int data;
node *next;
};
class linkedList{
node *head, *curr;
public:
linkedList(){
head = NULL;
curr=NULL;
}
void insert(int data){
node *newnode;
newnode = new node;
newnode->data = data;
newnode->next = NULL;
if(head == NULL){
head = newnode;
}
else{
curr = head;
while(curr->next != NULL){
curr=curr->next;
}
curr->next = newnode;
}
}
void display(){
curr = head;
while(curr){
cout<<curr->data<<"->";
curr=curr->next;
}
cout<<"NULL";
}
};
int main(){
linkedList obj;
obj.insert(55);
obj.insert(3);
obj.insert(93);
obj.insert(18);
obj.display();
}

