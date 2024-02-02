#include<iostream>
#include<string>
using namespace std;
class binary {
	string s;
	
public:
	void read();
	void checkbinary();
	void ones();
	void display();

};
void binary::read()
{
	cout << "Enter binary number:";
	cin >> s;
}
void binary::checkbinary()
{
	for (int i = 1; i < s.length(); i++)
	{
		if (s.at(i) !='0'&& s.at(i)!='1')
		{
			cout << "Incorrect binary format";
			exit(0);
		}
		
	}
	
}
void binary::ones()
{
	for (int i = 1; i < s.length(); i++)
	{
		if (s.at(i) == '1')
		{
			s.at(i) = '0';
		}
		else
		{
			s.at(i) = '1';
		}
	}
}
void binary::display()
{
	cout << "One's complement of this number is:";
	for (int i = 1; i < s.length(); i++)
	{  
		
		cout << s.at(i);
	}
}
int main()
{
	binary numbers;

	numbers.read();
	numbers.checkbinary();
	numbers.ones();
	numbers.display();
	
	
	return 0;
}