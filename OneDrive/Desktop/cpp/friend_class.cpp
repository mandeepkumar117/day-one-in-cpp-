#include<iostream>
using namespace std;
class sbi
{
	int amount=90000;
	void balance()
	{
		cout<<"balance="<<amount<<"\n";
	}
	friend class axis;
};
class axis
{
	public: void show(sbi sk)
	{
		cout<<"amounat= "<<sk.amount<<"\n";
		sk.balance();
	}
};
int main(){
    sbi s;
    axis a;
    a.show(s);
}

