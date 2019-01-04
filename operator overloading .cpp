
#include <iostream>
#include <string>
using namespace std;

class fraction{

	//Overload the stream insertion and extraction operators
	friend ostream& operator <<(ostream&,fraction&);
	friend istream& operator >> (istream&, fraction&);

private:
	int numerator;
	int denumerator;
	char divide;
public:
	fraction(){
		numerator = 0;
		denumerator = 0;
		divide = 0;
	}

	fraction(int a,int b,char c){
		numerator = a;
		denumerator = b;
		divide = c;
	}

	void get(){		
	cin>>numerator>>divide>>denumerator;		
	}

	void show(){
		cout<<numerator;
		cout<<divide;
		cout<<denumerator<<endl;
	}

	fraction operator ++(){    //prefix
		fraction ans;
		ans.denumerator = denumerator;
		ans.divide = divide;
		ans.numerator = numerator+denumerator;
		return ans;
	}
	fraction operator ++(int){    //postfix
		fraction ans;
		ans.denumerator = denumerator;
		ans.divide = divide;
		ans.numerator = numerator+denumerator;
		return ans;
	}
	fraction operator --(){
		fraction ans;
		ans.denumerator = denumerator;
		ans.divide = divide;
		ans.numerator = numerator-denumerator;
		return ans;
	}
	fraction operator --(int){
		fraction ans;
		ans.denumerator = denumerator;
		ans.divide = divide;
		ans.numerator = numerator-denumerator;
		return ans;
	}

	bool operator >(fraction f1);
	bool operator <(fraction f1);
	bool operator >=(fraction f1);
	bool operator <=(fraction f1);
	bool operator ==(fraction f1);
	bool operator !=(fraction f1);	

	fraction operator +(fraction f1); 
	fraction operator -(fraction f1);
	fraction operator *(fraction f1);
	fraction operator /(fraction f1);
	
	fraction operator +=(fraction f1);
	fraction operator -=(fraction f1);	
	fraction operator *=(fraction f1);	
	fraction operator /=(fraction f1);

};
bool fraction::operator >(fraction f1){
	if(f1.denumerator>denumerator){
		return true;
	}
	else
		return false;
}
bool fraction::operator <(fraction f1){
	if(f1.denumerator<denumerator){
		return true;
	}
	else
		return false;
}
bool fraction::operator>=(fraction f1){
	if(f1.denumerator > denumerator){
		return true;
	}
	if(f1.denumerator==denumerator && f1.numerator==numerator){
		return true;
	}
	else
		return false;
}
bool fraction::operator<=(fraction f1){
	if(f1.denumerator<denumerator){
		return true;
	}
	if(f1.denumerator==denumerator && f1.numerator==numerator){
		return true;
	}
	else
		return false;
}
bool fraction ::operator ==(fraction f1){
	if(f1.denumerator==denumerator && f1.numerator==numerator){
		return true;
	}
	else
		return false;
}
bool fraction ::operator != (fraction f1){
	float a = numerator/denumerator;
	float b = f1.numerator/f1.denumerator;
	if (a!=b)
		return false;
	else
		return true;
}

fraction fraction:: operator + (fraction f1){
	fraction ans;
	int m,n;
	m=f1.denumerator;
	n=denumerator;
	while(m!=n){              // finding L.C.M
		if(m < n){
			m=m+f1.denumerator;
		}
		else
			n=n+denumerator;
	    
       }
	int lcm = m;
	ans.numerator = lcm/denumerator*numerator + lcm/f1.denumerator*f1.numerator;
	ans.divide = f1.divide;
	ans.denumerator = lcm;
	return  ans;
}
fraction fraction :: operator-(fraction f1){
   fraction ans;
   int m,n;
    m=f1.denumerator;
    n=denumerator;
    while(m!=n){
		if(m < n){
			m=m+f1.denumerator;
		}
		else{
			n=n+denumerator;
	    }
    }
	int lcm = m;
	ans.numerator = lcm/denumerator*numerator - lcm/f1.denumerator*f1.numerator;
	ans.divide = f1.divide;
	ans.denumerator = lcm;
	return  ans;
}

fraction fraction :: operator *(fraction f1){
	fraction ans;
	ans.denumerator = f1.denumerator * denumerator;	
	ans.numerator = f1.numerator * numerator;
	ans.divide = f1.divide;
	return ans;
}

fraction fraction::operator /(fraction f1){
	fraction ans;
	ans.numerator = numerator * f1.denumerator;
	ans.denumerator = denumerator * f1.numerator;
	ans.divide = f1.divide;
	return ans;
}
istream& operator >> (istream& s, fraction& f1){
	cout<<"Enter number in fracton :";
	s >> f1.numerator >> f1.divide >> f1.denumerator;
	return s; 
}
ostream& operator << (ostream& s, fraction& f1){
	 s << f1.numerator << f1.divide << f1.denumerator; 
	 return s; 
}
fraction fraction :: operator +=(fraction f1){
	fraction ans;
	int m,n;
	m=f1.denumerator;
	n=denumerator;
	while(m!=n){              // finding L.C.M
		if(m < n){
			m=m+f1.denumerator;
		}
		else
			n=n+denumerator;
	    
       }
	int lcm = m;
	numerator = lcm/denumerator*numerator + lcm/f1.denumerator*f1.numerator;
	ans.divide = f1.divide;
	denumerator = lcm;
	ans.numerator = numerator;
	ans.denumerator = denumerator;
	return  ans;
}

fraction fraction :: operator -=(fraction f1){
	fraction ans;
	int m,n;
	m=f1.denumerator;
	n=denumerator;
	while(m!=n){              // finding L.C.M
		if(m < n){
			m=m+f1.denumerator;
		}
		else
			n=n+denumerator;
	    
       }
	int lcm = m;
	numerator = lcm/denumerator*numerator - lcm/f1.denumerator*f1.numerator;
	ans.divide = f1.divide;
	denumerator = lcm;
	ans.numerator = numerator;
	ans.denumerator = denumerator;
	return  ans;
}
fraction fraction :: operator *=(fraction f1){
	fraction ans;
	denumerator = f1.denumerator * denumerator;	
	numerator = f1.numerator * numerator;
	ans.divide = f1.divide;
	ans.denumerator = denumerator;
	ans.numerator = numerator;
	return ans;
}
fraction fraction::operator /=(fraction f1){
	fraction ans;
	numerator = numerator * f1.denumerator;
	denumerator = denumerator * f1.numerator;
	ans.divide = f1.divide;
	ans.numerator = numerator;
	ans.denumerator = denumerator;
	return ans;
}

int main(){

	fraction f1,f2,f3,f4;
	f1.get();
	f2.get();
	cout<<"f1 = ";
	f1.show();
	cout<<"f2 = ";
	f2.show();

	++f1;
	f2 = ++f1;
	cout<<"++f1 = ";
	f1.show();

	cout<<"f2 = ";
	f2.show();

	f1++;
	f2 = f1++;
	cout<<"f1++ = ";
	f1.show();

	cout<<"f2 = ";
	f2.show();

	--f1;
	f2 = --f1;
	cout<<"--f1 = ";
	f1.show();

	cout<<"f2 = ";
	f2.show();

	f1--;
	f2 = f1--;
	cout<<"f1-- = ";
	f1.show();

	cout<<"f2 = ";
	f2.show();
	

	if(f1>f2){
		cout<<"f1>f2"<<endl;
	}
	if(f1<f2){
		cout<<"f1<f2"<<endl;
	}
	if(f1>=f2){
		cout<<"f1>=f2"<<endl;
	}
	if(f1<=f2){
		cout<<"f1<=f2"<<endl;
	}
	if(f1==f2){
		cout<<"f1==f2"<<endl;
	}
	if(f1!= f2){
		cout<<"f1 != f2"<<endl;
	}
	f3 = f1+f2;
	cout<<"calling + operator : ";
	f3.show();

	f4 = f1-f2;
	cout<<"calling - operator : ";
	f4.show();

	f4 = f1*f2;
	cout<<"calling * operator : ";
	f4.show();

	f3 = f1/f2;
	cout<<"calling / operator : ";
	f3.show();

	cin>>f1;
	cout<<f1;
	
	f1+=f2;
	cout<<"f1+=f2 --> = ";
	f1.show();

	f1-=f2;
	cout<<"f1-=f2 --> = ";
	f1.show();

	f1*=f2;
	cout<<"f1*=f2 --> = ";
	f1.show();

	f1/=f2;
	cout<<"f1/=f2 --> = ";
	f1.show();
	
	return 0;
}
