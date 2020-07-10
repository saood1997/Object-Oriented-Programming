#include <iostream>
#include <string>
using namespace std;

//............................Aggregation Implemintaion.....................//

////////////////////////////////////#car#///////////////////////
class car{
    string name;
    int model;
public:
	car(string name , int model){
		this->name = name;
		this->model = model;
		cout<<"creating a car"<<endl;
	}
	~car(){
		cout<<"destroy the car"<<endl;
	}
	
	int run(int speed){
		cout<<"car runing with "<<speed<<" m/s"<<endl;
	}
	int run(int speed , string cheak){
		cout<<"car is "<<cheak<<" runing with "<<speed<<" m/s"<<endl;
	}
};
////////////////////////////////////#Persion#////////////////////
class person{
	car *percar;
public:
	person(car *p){
		percar = p;
		cout<<"person purchase the car"<<endl;
	}
	void drivecar(int speed){
		percar->run(speed);
	}
	~person(){
		cout<<"person is die"<<endl;

	}
	

};

///////////////////////////////////////#Main#///////////////////

int main(){
	car c("BMW",520);
	person *per = new person(&c);
	per->drivecar(200);
	delete per;
	c.run(200,"still");
	return 0;
}