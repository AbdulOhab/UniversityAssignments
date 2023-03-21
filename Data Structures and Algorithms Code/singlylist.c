#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int data;
	struct node *next;
};

int main()
{
	char buf[256];
	struct node *head=NULL, *iter;
	while(fgets(buf,256,stdin)!=NULL)
	{
		char cmd[256];
		int x, y;
		sscanf(buf,"%s %d %d",cmd,&x,&y);
		if(strcmp(cmd,"prepend")==0 || (strcmp(cmd,"append")==0 && head==NULL))
		{
			struct node *temp;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data = x;
			temp->next = head;
			head = temp;
		}
		else if(strcmp(cmd,"append")==0)
		{
			struct node *temp;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data = x;
			temp->next = NULL;
			for(iter=head;iter->next!=NULL;iter=iter->next){
				/* intend to do nothing */;
			}
			iter->next = temp;
		}
		else if(strcmp(cmd,"insert")==0)
		{
			struct node *temp;
			for(iter = head; iter!=NULL && iter->data!=y; iter=iter->next){
				/* intend to do nothing */;
			}
			if(iter!=NULL){ /* yeah!! there is something to do */
				temp = (struct node *)malloc(sizeof(struct node));
				temp->data = x;
				temp->next = iter->next;
				iter->next = temp;
			}
		}
		else if(strcmp(cmd,"delete")==0)
		{
			struct node *temp;
			if(head!=NULL){
				if(head->data==x){
					temp=head;
					head=head->next;
					free(temp);
				}
				else
				{
					for(iter = head; iter->next!=NULL && iter->next->data!=x; iter=iter->next){
						/* intend to do nothing */;
					}
					if(iter->next!=NULL)
					{
						temp = iter->next;
						iter->next = temp->next;
						free(temp);
					}
				}
			}
		}
		printf("The list:");
		for(iter=head;iter!=NULL;iter=iter->next)
			printf(" %d",iter->data);
		puts("");
	}
	return 0;
}
