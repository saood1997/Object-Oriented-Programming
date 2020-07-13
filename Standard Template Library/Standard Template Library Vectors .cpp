#include <iostream>
#include <vector>

using namespace std;

void output_vector_values(vector<int> v){
	cout<<"[";
	for (auto i = v.begin(); i != v.end() ; i++)
	{
		cout<<*i<<" ";
	}
	cout<<"]"<<endl;
	
	// alternatively
	//only for forward direction
	// cout<<"[";         //for each loop
	// for (int x : v)
	// 	cout << x << " ";
	// cout<<"]"<<endl;

}

void reverse_output_vector_values(vector<int> v){
	cout<<"[";
	for (auto i = v.rbegin(); i != v.rend() ; i++)
	{
		cout<<*i<<" ";
	}
	cout<<"]"<<endl;

}

int main(){
	vector<int> marks; //a vector like list in python

	for (int i = 0; i < 5; i++){
		marks.push_back(i*10);    //append to list marks
	}

	//alternatively

	// vector<int> marks{10,20,30,40,50};

	int val = marks[1];
	cout<<"At index 1: "<<val<<endl;

	output_vector_values(marks);
	reverse_output_vector_values(marks);
	
	//remove a value from a specific position
	auto it = marks.begin();
	marks.erase(it + 2);

	output_vector_values(marks);


	return 0;

}
