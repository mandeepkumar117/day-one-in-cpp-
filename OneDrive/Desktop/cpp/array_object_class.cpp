we use multiple data store

#include<iostream>
using namespace std;
class cybrom
{
	char name[20];
	int  rno;
	public:void input()
	{
		cout<<"enter rollno\n";
		cin>>rno;
		cout<<"enter name\n";
		cin>>name;
	}
	void show()
	{
		cout<<"Rno= "<<rno<<"\t";
		cout<<"name= "<<name<<"\t";
	}
};
int main(){
    cybrom obj[20];
    int r;
    cout<<"Enter how many records you enter\n";
    cin>>r;
    for(int i = 0; i < r; i++)
    {
    	obj[i].input();
	}
	for(int i = 0; i < r; i++)
	{
		obj[i].show();
	}
}

