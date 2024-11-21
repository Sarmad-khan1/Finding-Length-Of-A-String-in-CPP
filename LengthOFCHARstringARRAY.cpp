#include <iostream>
using namespace std;
int main()
{
	char inputstr[100];
	cout<<"Enter the string: ";
	cin.getline(inputstr,100);
	
	int length=0;
	while(inputstr[length] != '\0')
	{
		length++;
	}
	if(length % 2 == 0)
	{
		cout<<"True!"<<endl;
	}
	else
	{
		cout<<"False!"<<endl;
	}
	return 0;
}