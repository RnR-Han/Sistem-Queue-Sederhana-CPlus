#include<iostream>
#include<stdio.h>
using namespace std;
#define size 50

struct stack {
int elemen[size];
int top;
};
typedef struct stack STACK;

// operasi push
void push(STACK *p,int value){
if(p->top==size-1)
cout<<"STACK penuh ";
else
p->elemen[++p->top]=value;
}
//operasi pop
int pop(STACK *p) {
if (p->top==-1)
{
cout<<"STACK kosong";
return -1;
}
else
return p->elemen[p->top--];
}
//menampilkan stack
void display (STACK *p) {
int i;
if(p->top==-1)
cout<<"\n STACK kosong\n";
else
cout<<"\nIsi STACK adalah : \n";
for (i=p->top;i>=0; --i)
cout<<p->elemen[i]<<"\n";
}

int main() {
STACK s ;
int x,c,i;
s.top=-1;
do
{
cout<<"MENU PILIHAN";
cout<<"\n1: Operasi PUSH\n";
cout<<"2: Operasi POP\n";
cout<<"3: Tampilkan Stack\n";
cout<<"4: Hapus Stasck\n";
cout<<"5: Keluar\n";
cout<<"\n\n Pilihan anda : ";cin>>c;
switch(c) {
	case 1: cout<<"\nMasukkan Elemen Stack:
";cin>>x;
push (&s,x);
display(&s);
break;
case 2: x=pop(&s);
if(x!=-1)
cout<<"\nMenghapus Element = "<<x;
break;
case 3: display(&s);
break;
case 4:
if(s.top==-1)
cout<<endl<<"STACK kosong";
else
cout<<endl<<"STACK dihapus"<<endl;
//Menghapus STACK
for (i=s.top;i>=0; --i)
cout<<"Elemen yang dihapus adalah : "<<
pop(&s)<<endl;
s.top=-1;
}
getc;
system("clear");
}
while(c!=5);
}

