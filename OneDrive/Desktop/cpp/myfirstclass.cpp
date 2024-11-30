#include<iostream>
using namespace std;
class atm
{
	int rs=2000;
	public:
	void show()
	{
		cout<<rs;
	}
	private:
	void fun()
	{
		cout<<"\nwelcome";
	}
	public:
	void display()
	{
		cout<<"\nbye";
	}
	void table(int a)
	{
		for(int i=1; i<=10; i++)
		{
			cout<<a*i<<"\t";
		}
	}
	
	int fact(int f)
	{
		int k=1;
		for(f;f>1;f--)
		{
			k=k*f;
		}
		return k;
	}
};
int main(){
    atm sbi;
    sbi.show();
//    sbi.fun();
    sbi.display();
    int t;
    cout<<"enter any number\n";
    cin>>t;
    sbi.table(t);
    cout<<"\nfactorial of number";
    cout<<sbi.fact(t);
}

