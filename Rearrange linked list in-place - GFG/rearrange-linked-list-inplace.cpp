//{ Driver Code Starts
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends

/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

Node *inPlace(Node *head)
{
    struct Node *t=head,*ans=NULL,*te;
    int n=0;
    int i=0;
    while(t!=NULL){
        // a[n]=(t->data);
        t=t->next;
        n++;
    }
    int a[n],b[n];
    t=head;
    while(t!=NULL){
        a[i]=(t->data);
        t=t->next;
        i++;
    }
    int s=0,e=n-1,f=1;
    i=0;
    while(s<=e){
        if(f==1){
            b[i]=a[s];
            s++;
            f=2;
        }else{
            b[i]=a[e];
            e--;
            f=1;
        }
        i++;
    }
    
    for(int i=0;i<n;i++){
        if(ans==NULL){
            ans=te=new Node(b[i]);
        }
        else{
            te->next=new Node(b[i]);
            te=te->next;
        }
    }
    return ans;
    
}

















