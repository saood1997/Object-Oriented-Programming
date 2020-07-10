#include <iostream>
using namespace std;


class Point{

public:
	int x;
	int y;

	void print_point();

};

void Point::print_point(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

class Shape{
public:
	int num_points;
	Point *p;

	Shape();
	float get_area();
	void set_points(Point *p);
};

Shape :: Shape(){
	cout<< "In Shape constructor ..."<<endl;
	p = NULL;
	num_points = 0;
}
float Shape::get_area(){
	cout<<"Shape Area !"<<endl;
	return -1.0;
}
 

class triangle : public Shape{
public:

	triangle();

	float get_area();
	void set_points(Point *p);
	void print_ship();
};

triangle :: triangle(){
	cout<< "In triangle constructor ..."<<endl;
	num_points = 3;
}

float triangle :: get_area(){
	cout<<"Area of triangle"<<endl;
}

void triangle :: set_points(Point *p){
	this->p = p;
}

void triangle :: print_ship(){
	Point *temp;
	temp = p;
	for (int i = 0; i < num_points; i++)
	{
		temp->print_point();
		temp++;
	}
}

void create_triangle(){
	triangle *t;
	t = new triangle;

	Point p1,p2,p3;

	p1.x = p1.y = 0;
	p2.x = p2.y = 1;
	p3.x = p3.y = 2;

	Point *p;
	p = new Point[2];

	p[0] = p1;
	p[1] = p2;
	p[2] = p3;

	t->set_points(p);
	t->print_ship();

}


int main()
{
	create_triangle();
	return 0;
}





