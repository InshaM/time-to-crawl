//First include the  Library
#include <iostream>
using namespace std;
//Write the main function
int main() {
	//Declaring the variables
	int p,q,sum,sub,pro,div,remain ;
	//Defining the values for the variables
	p=36;
	q=6;
	sum = p+q;  // addition of the two numbers
	sub = p-q;  // difference of two numbers
	pro = p*q;  // product of two numbers
	div = p/q;  // division of two numbers
	remain = p%q;  //shows the remainder
	cout  << "The numbers are " << p <<"," << q << endl;
	cout   << "The arithmetic operations concerning " << p << " and " << q  << endl;
	cout  << "Their sum is " << sum<< endl;
	cout  << "Their difference is " << sub << endl;
	cout  << "Their product is " << pro << endl;
	cout  << "Their division is " << div<< endl;
	cout  << "Their remainder of their division is " << remain << endl;
return 0;
}





