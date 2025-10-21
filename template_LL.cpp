#include<iostream>
using namespace std;
template <typename T>
class Node{
	public:
		T data;
		Node<T> *next;
};
template <typename T>
class singlyLinkedList{
	private:
		Node<T> *head;
	public:
		singlyLinkedList()
		{
			head=NULL;
		}
	void insert(T value)
	{
		Node<T> *newnode=new Node<T>;
		newnode->data=value;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else{
			Node<T> *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	void remove()
	{
		if(head==NULL)
		{
			cout<<"List is empty";
			return;
		}
		if(head->next==NULL)
		{
			delete head;
			head=NULL;
			return;
		}
		Node<T> *temp=head;
		Node<T> *prev=NULL;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		delete temp;
		prev->next=NULL;
	}
	void display()
	{
		Node<T> *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL\n";
	}	
};
int main()
{
	singlyLinkedList<int> intlist;
	intlist.insert(10);
	intlist.insert(20);
	intlist.insert(30);
	cout<<"Integer List:";
	intlist.display();
	intlist.remove();
	cout<<"After deleting:";
	intlist.display();
	intlist.remove();
	cout<<"After deleting:";
	intlist.display();
	//Inserting string
	singlyLinkedList<string> strlist;
	strlist.insert("Hii");
	strlist.insert("Hello");
	strlist.insert("Bye");
	cout<<"String List:";
	strlist.display();
	strlist.remove();
	cout<<"After deleting:";
	strlist.display();
	strlist.remove();
	cout<<"After deleting:";
	strlist.display();
	
}
