#include<iostream>
using namespace std;

template <class T>

struct node{
	T info;
	node *next;
};

class data{
private:
	// struct node{
	// 	T info;
	// 	node *next;
	// };
	node<T> *head,*current,*temp;

public:
	///////////////////////////code for insert node with last node/////////////////////////////////////////////////////////
	data(){
		head = current = NULL;
	}
	
	void insert_last(){

		if(head==NULL){
			head = new node<T>;
			cout<<"enter info :"<<endl;
			cin>>head->info;
			head->next = NULL;
		}
        
		else{
			current = head;
			while(current->next!=NULL){
				current = current->next;
			}
			current->next = new node<T>;
			cout<<"enter info:"<<endl;
			cin>>current->next->info;
			current->next->next = NULL;
		}

    
	}
	
	void print(){
		current = head;
		while(current!= NULL){
			cout<<current->info;
			current = current->next;
		}
	}
};

int main(){
	//////////////////////////////////////////////
	data<int> d;
	cout<<"Enter Interger values "<<endl;
	for(int i = 0;i<5;i++){
		d.insert_last();
	}
	cout<<"Interger values :"<<endl;
	d.print();

	/////////////////////////////////////////////////
	data<char> d1;
	cout<<"Enter character values "<<endl;
	for(int i = 0;i<5;i++){
		d1.insert_last();
	}
	cout<<"character values :"<<endl;
	d1.print();


	return 0;
}
