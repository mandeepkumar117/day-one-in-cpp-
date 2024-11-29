#include<iostream>
using namespace std;
class cybrom
{
	static int a;//yahan static variable initialize nahi hota hai.iske liye class se bahar initialize karna padta hai.yahan sirf non static initialize hota hai
	public:void show()
	{
		a++;
		cout<<a<<"\t";
	}
};
int cybrom::a=20;
int main(){
    cybrom c;
    c.show();
    c.show();
    cybrom g;
    g.show();
}

