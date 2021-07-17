//////////////////////////////////////////////////////////POINTER REVISION//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
void Pointer_Pass_By_value(int *xyz)
{
	cout << "Passing by value " << endl;
	cout << "Value stored iside ptr " << *xyz << endl;
	cout << "Address of pointer itslef is " << &xyz << endl;
	cout << "Adress of variable inside the pointer is "<<xyz << endl;
		
}
void Pointer_Pass_By_Reference(int*& xyz)
{
	cout << "Passing by reference " << endl;
	cout << "Value stored inside ptr " << *xyz << endl;
	cout << "Address of pointer itself is " << &xyz << endl;
	cout << "address of variable inside the pointer is " <<xyz<< endl;
}
int main()
{
	string data;
	data = "Random thoughts";
	string* ptr = NULL;
	ptr = &data;
	cout << "Address of pointer itself is  " << &ptr<<endl;
	cout << "Address of data is  " << ptr<<endl;
	cout << "Stuff written in data  " << *ptr<<endl;
	cout << endl;
	cout << endl;
	cout << endl;
	string** ptr2;
	ptr2 = &ptr;
	cout << "Address of ptr 2 itself is  " << &ptr2 << endl;
	cout << "Address of ptr  is " << ptr2 << endl;
	cout << "Value inside ptr 2 is " << **ptr2 << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	int* pointer1=NULL;
	int x = 10;
	pointer1 = &x;
	int y = 100;
	int* pointer2=NULL;
	pointer2 = &y;
	if (*pointer1 == *pointer2)
	{
		cout << "Same values are stored \n";
	}
	else
	{
		cout << "Different values are stored \n";
	}

	/////////////CODE OF HEAP MEMORY TESTING/////////////
	/*bool val = true;
	long long int* ptrr = new long long int;
	while (val == true)
	{
		cout << ptrr;
	}*/

	int* newptr = new int;
	*newptr = 2939;

	cout << "Adress of ptr: " << &newptr << endl;
	cout << "Address stored in ptr: " << newptr << endl;
	cout << "Value pointer by ptr: " << *newptr << endl;
	Pointer_Pass_By_value(newptr);
	cout << endl;
	cout << endl;
	cout << endl;
	Pointer_Pass_By_Reference(newptr);

	return 0;
}