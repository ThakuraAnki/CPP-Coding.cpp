#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* h) {
	int cnt = 0;
	while (h != NULL) {
		cnt++;
		h = h->next;
	}

	return cnt;
}

void insertAtFront(node* &h, node* &t, int data) {
	if (h == NULL) {
		h = t = new node(data);
	}
	else {
		node* n = new node(data);
		n -> next = h;
		h = n;
	}
}

void insertAtEnd(node* &h, node* &t, int data) {
	if (h == NULL) {
		h = t = new node(data);
	}
	else {
		node* n = new node(data);
		t->next = n;
		t = n;
	}
}

void insertAtMid(node* &h, node* &t, int pos, int data) {
	if (pos == 0) {
		insertAtFront(h, t, data);
	}
	else if (pos >= lengthLL(h)) {
		insertAtEnd(h, t, data);
	}
	else {

		node* temp = h;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void printLL(node* h) {
	while (h != NULL) {
		cout << h->data << "->";
		h = h->next;
	}
	cout << "NULL\n";
}

int main() {

	node* head, *tail;
	head = tail = NULL;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
       int val;
       cin>>val;
       insertAtEnd(head,tail,val);
    }

    node* head1, *tail1;
	head1 = tail1 = NULL;
    int n1;
    cin>>n1;
    for (int i = 0; i < n1; i++){
       int val;
       cin>>val;
       insertAtEnd(head1,tail1,val);
    }
    int a=0;
        while(head!=NULL){
            a*=10;
            a+=head->data;
            head=head->next;
        }
         int b=0;
        while(head1!=NULL){
            b*=10;
            b+=head1->data;
            head1=head1->next;
        }
        int ans=a+b;
        node*h,*t;
        h=t=NULL;
        while(ans>0){
            int ld=ans%10;
            insertAtEnd(h,t,ld);
            ans/=10;
        }
        while(h!=NULL){
            cout<<h->data<<" ";
            h=h->next;
        }
        
        
    

	return 0;
}















