//{ Driver Code Starts
#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}

// } Driver Code Ends
/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
};
*/
/*  Function which returns the  root of 
    the flattened linked list. */
Node* merge(Node* l1,Node* l2){
    Node *root=nullptr,*temp=nullptr;
    while(l1!=nullptr && l2!=nullptr){
        if((l1->data)<=(l2->data)){
            if(!root){
                root=temp=l1;
            }else{
                temp->bottom=l1;
                temp=l1;
            }
            l1=l1->bottom;
        }else{
            if(!root){
                root=temp=l2;
            }else{
                temp->bottom=l2;
                temp=l2;
            }
            l2=l2->bottom;
        }
    }
    if(l1==nullptr)swap(l1,l2);
    while(l1!=nullptr){
        if(!root){
            root=temp=l1;
        }else{
            temp->bottom=l1;
            temp=l1;
        }
        l1=l1->bottom;
    }
    return root;
}
Node *flatten(Node *root){
   Node* ans=nullptr;
   while(root!=nullptr){
       ans=merge(ans,root);
       root=root->next;
   }
//   while(ans!=nullptr){
//       cout<<ans->data<<endl;
//       ans=ans->bottom;
//   }
   return ans;
}

