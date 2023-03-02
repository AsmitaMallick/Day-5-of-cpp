#include<iostream>
using namespace std;
int main()
{
	//**********Selction Structure Control:if-else statement********
	int age;
	cout<<"enter your age: "<<endl;
	cin>>age;
	if(age<18){
		cout<<"you are not allowed in the party"<<endl;
	}
	else if(age==18){
		cout<<"you will get kid card"<<endl;
	}
	else if(age>18){
		cout<<"you are welcome"<<endl;
	}
	return 0;
}
