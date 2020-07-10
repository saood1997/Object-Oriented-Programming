#include <iostream>
using namespace std;

class room{
public:
	room(){
		cout<<"created room"<<endl;
	}
	~room(){
		cout<<"destroy room"<<endl;
	}
};

class Home{
public:
    room r;
	Home(){
		cout<<"Home is created"<<endl;
	}
	~Home(){
		cout<<"Home is destroy"<<endl;
	}
	
};



int main(){
	Home *h;
	h = new Home();
	cout<<"delete home"<<endl;
	delete h;
	return 0;
}