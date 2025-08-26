#include<stdio.h>
#include<stdlib.h>
struct node {
  int d;
  struct node *per,next;
  );
 struct node *head=NULL;
 void insert(int a) {
    struct node *n= malloc(sizeof(struct node));
    n->d=a;
    n->pre=NULL;
    n->next=head
    if(head)
    head->per=n;
    head=n;
    }
    //
 void travelsef() {
  struct node *temp=head;
  while(temp) {
  printf("%d<->",temp ->d);
  if (!temp->next)
  break;
  temp=temp->next;
  }
  printf("NULL");
  }
  //
  void travelseb()
  struct node *temp=head;
  if(!temp)
  return;
   while (temp->next)
   temp=temp->next;
  printf("%d <->", temp ->d);
  temp=temp->pre;
  }
  print("NULL");
  }
  //
  int main() {
  int a,b,p;
  printf("enter the no of nodes required: ")
     scanf("d",&a);
     for (int i=1;i<a;i++)) {
     printf("enter the data of the %d node:",i):
     scanf("%d",&b);
     insert(b);
     }
 printf("enter 1 for forward traversing and enter 2 for backward traversing......")
 scanf("%d",&p");
 if(p==1)
 travelsef()
 else
 travelseb()
 }
 
     
  
    
