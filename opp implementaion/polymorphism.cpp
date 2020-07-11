#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
class Plugin{
public:
	// virtual void apply_filter(int img[5][5]){

	// 	cout<< "Function apply_filter for Plugin called...."<<endl;

	// }
	virtual void apply_filter(int img[5][5])=0; // pure virtual function

};

/////////////////////////////////////////////////////////////////////////
class MakeItWhite : public Plugin{

public:
	void apply_filter(int img[5][5]){
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				img[i][j] = 255;
			}
		}
	}
};

////////////////////////////////////////////////////////////////////////
class MakeItBlack : public Plugin{

public:
	void apply_filter(int img[5][5]){
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				img[i][j] = 0;
			}
		}
	}
};


/////////////////////////////////////////////////////////////////////
void init_matrix(int a[5][5]){
	int val = 0;
	for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				a[i][j] = val;
				val += 1;
			}
		}
}

void output_matrix(int a[5][5]){
	for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				cout<< a[i][j] << " ";
			}
			cout<<endl;
		}
}

Plugin * select_plugin(){
	string plugin_name = "miw";

	if (plugin_name == "miw"){
		return new MakeItWhite;
	}
	else
		return new MakeItBlack;
}

//////////////////////////////////////////////////////////////////////
int main(){
	int pic[5][5];

	init_matrix(pic);
	cout<<"No filter apply......."<<endl;
	output_matrix(pic);

	Plugin P;
	P.apply_filter(pic);

	// MakeItWhite miw;
	// miw.apply_filter(pic);

	// cout<<"After MakeItWhite"<<endl;
	// output_matrix(pic);

	// MakeItBlack mib;
	// mib.apply_filter(pic);

	// cout<<"After MakeItBlack"<<endl;
	// output_matrix(pic);

	Plugin *p; // p is pointer which hold the address of plugin it also hold the address of miw and mib because its type of plugen
	p = select_plugin();
	p->apply_filter(pic);
	cout<<"After Plugin Application: " <<endl;
	output_matrix(pic);


	return 0;
}