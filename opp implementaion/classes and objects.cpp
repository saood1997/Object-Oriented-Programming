#include <iostream>
using namespace std;


class Home{
private:
	int no_rooms;
	int no_bathrooms;

public:
	Home(){
		no_rooms = 3;
		no_bathrooms = 2;
		cout<<"with no parameters constractor call"<<endl;
	}
	Home(int no_rooms, int no_bathrooms){
		this->no_rooms = no_rooms;
		this->no_bathrooms = no_bathrooms; 
		cout<<"parameters constractor call"<<endl;

	}
	void rooms(){
		cout<<"rooms :"<<no_rooms<<endl;

	}

	void bathrooms(){
		cout<<"bathrooms :"<<no_bathrooms<<endl;
	}


};


int main(){
	Home h1(50,50); // h1 is called instant or object of a class because its type is class
	h1.rooms();

	Home *h; // h is called reference variable because its type is class pointer

	h = new Home();
	(*h).rooms();
	h->rooms();
	h->bathrooms();
	
	// delete h;
	// cout<<"After deleting h"<<endl;

	// h = new Home(10,5);
	// h->rooms();
	// h->bathrooms();


	return 0;
}