#include<stdio.h>
//#include<conio.h>
//#include<malloc.h>
#include<stdlib.h>

typedef struct linkedlist
{
	int data;
	struct linkedlist *left,*right;
}node;

void makenode(node *, int);

void preorder(node *);
void postorder(node *);
void inorder(node *);

int depth(node *,int);

int l=0,d=0;

int main()
{
	node *root;
	int x,f, choice;

//	clrscr();

	printf("\nEnter the root :");
	scanf("%d",&x);

	root=(node *)malloc(sizeof(node));

	root->data=x;
	root->left=root->right=NULL;

	do
	{
		printf("\n1. Insert 2. InOrder 3. PostOrder 4. PreOrder 5. Depth 6. Exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter Element:\t");
				scanf("%i", &x);
				makenode(root, x);
				break;
			case 2:
				printf("\nInorder Traversal:\t");
				inorder(root);
				break;
			case 3:
				printf("\nPostorder Traversal:\t");
				postorder(root);
				break;
			case 4:
				printf("\nPreorder Traversal:\t");
				preorder(root);
				break;
			case 5:
				f=depth(root, l);
				printf("\nDepth=\t%i\n", f);
				break;
			case 6:
				exit(0);
			default:
				printf("\n\nDear Sir / Mam .....Sorry.....It's a wrong choice\n\n");
		}
	}while(choice!=6);

	return 0;
}

void makenode(node *root, int x)
{
	node *new_node, *check_null, *check_prev;

	new_node=(node *)malloc(sizeof(node));

	new_node->left=new_node->right=NULL;

	new_node->data=x;

	check_null=root;

	while(check_null!=NULL)
	{
		check_prev=check_null;

		if(x<check_null->data)
		{
			check_null=check_null->left;
		}
		else
		{
			check_null=check_null->right;
		}
	}

	if(x<check_prev->data)
	{
		check_prev->left=new_node;
	}
	else
	{
		check_prev->right=new_node;
	}
}

void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}

void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}

void preorder(node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

int depth(node *root,int l)
{
	if(root!=NULL)
	{
		if(l>d)
		d=l;
		depth(root->left,l+1);
		depth(root->right,l+1);
	}
	return d;
}
