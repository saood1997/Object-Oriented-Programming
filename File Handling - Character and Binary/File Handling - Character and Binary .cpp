#include <iostream>
#include <fstream>
using namespace std;

int char_input_output(){

	ofstream fout;
	fout.open("file.txt");
	fout<<"My first 123 line ........"<<endl;
	fout<<"My second line ......."<<endl;
	fout.close();

	ifstream fin;

	fin.open("file.txt");
	string line;
	while (fin){         		// if file open successfully then fin = true
								// if end of lines reached then fin = false 
		getline(fin,line);      
		cout<<line<<endl;
	}
	return 0;
}

void output_matrix(int pixels[][3] ,int x, int y){

	for (int i = 0; i<x; i++){
		for (int j = 0; j<y; j++){
			cout<<pixels[i][j]<<" ";
		}
		cout<<endl;
	}
}
int bin_input_output(){
	int pixels[3][3];

	for (int i = 0; i<3; i++){
		for (int j = 0; j<3; j++){
			pixels[i][j] = 1 + i*j;
		}
	}
	cout<<"Input Matrix"<<endl;
	output_matrix(pixels, 3, 3);

	ofstream fout;
	fout.open("data.bin", ios::binary); // we give two arguments because we are going to write binary form of integern in the files instead of chracters
	
	
	for(int row = 0; row<3; row++){
		for(int col = 0; col<3; col++){
			fout.write((char *)&pixels[row][col],sizeof(int));
		}
	}

	fout.close();

	int pixels_read[3][3];

	ifstream fin("data.bin", ios::binary);

	if(fin.fail()){
		cout<<"Failed to read file .... "<< endl;
	}
	else{
		for(int row = 0; row<3; row++){
			for(int col = 0; col<3; col++){
				fin.read((char *)&pixels_read[row][col],sizeof(int));
			}
		}
	}

	fin.close();
	cout<<"Reading from the file"<<endl;
	output_matrix(pixels_read,3,3);

	return 0;
}


int main(){
	// writing and reading from a file 
	// using character input/output
	char_input_output();

	// writing and reading from a file 
	// using character input/output	
	bin_input_output();

}