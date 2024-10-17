struct node
{
  int co;
  int pow;
  struct node *link;
};
struct node* create(head)
{
  int n,i,a,b;
  printf("enter the no of expression ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\nenter the co-efficient  %d ",i);
    scanf("%d",&a);
    printf("\nenter the degree ",i);
    scanf("%d",&b);
    printf("\nthe expression %d ^ %d",a,b);
    head=create_list(head,a,b);
  }
  return(head);
}
struct node* create_list(head,a,b)
{
  struct node*temp=malloc(sizeof(struct node));
  temp->co=a;
  temp->pow=b;
  temp->link=NULL;
  temp->link=head;
  return(head);
}

int main()
{
  struct node*head=NULL;  
  printf("enter the first expression");
  head=create(head);
  printf(enter the second expression");
  head1=create(head);
}