#include <stdio.h>
#include<stdlib.h>
Struct node{
        int data;
        struct node *link;
     
    };
    count(struct node *start)
{
      int count1=0;
      if(start==NULL)
      printf("Empty list");
      struct node *ptr=NULL;
      ptr=start;
      while(ptr->link!=NULL){
        count1= count1+1;
        ptr=ptr->link;
  }
      printf("%d",count1);
    }
    
    int main()
    {
        struct node *start=NULL;
        start=malloc(sizeof(struct node));
        start->data=10;
        start->link=NULL;
        //printf(" %d",start->data);
       struct node *new=NULL;
        new=malloc(sizeof(struct node));
        new->data=20;
        new->link=NULL;
        start->link=new;
       
        //printf(" %d",new->data);
      new=malloc(sizeof(struct node));
        new->data=30;
        new->link=NULL;
        start->link->link=new;
        //printf(" %d",value->data);
        start->link->link=new;
        count(start);
        return 0;
    }