#include <iostream>
using namespace std;
//pembuatan node struktur
struct node
{
int data;
struct node *next;
};
//pembuatan class stack
class stack
{
struct node *top;
public:
stack() // constructor
{
top=NULL;
}
void push(); //penambahan elemen
void pop(); // to delete an element
void show(); // to show the stack
};
// PUSH Operation
void stack::push()
{
int value;
struct node *ptr;
cout<<"\nPUSH Operationn";
cout<<"Enter a number to insert: ";
cin>>value;
ptr=new node;
ptr->data=value;
ptr->next=NULL;
if(top!=NULL)
ptr->next=top;
top=ptr;
cout<<"\nNew item is inserted to the stack!!
!";
}
// POP Operation
void stack::pop()
{
struct node *temp;
if(top==NULL)
{
cout<<"\nThe stack is empty!!!";
}
temp=top;
top=top->next;
cout<<"\nPOP Operation.\nPoped value is "<<temp->data;
49. delete temp;
}
// Show stack
void stack::show()
{
struct node *ptr1=top;
cout<<"\nThe stack is\n";
while(ptr1!=NULL)
{
cout<<ptr1->data<<" ->";
59. ptr1=ptr1->next;
60. }
61. cout<<"NULL\n";
62. }
63. // Main function
64. int main()
65. {
66. stack s;
67. int choice;
68. while(1)
69. {
70. cout<<"\n-----------------------------------
";
71. cout<<"\n\t\tSTACK USING LINKED LIST\n\n";
72. cout<<"1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXI
T";
73. cout<<"\nEnter your choice(1-4): ";
74. cin>>choice;
75. switch(choice)
76. {
77. case 1:
78. s.push();
79. break;
80. case 2:
81. s.pop();
