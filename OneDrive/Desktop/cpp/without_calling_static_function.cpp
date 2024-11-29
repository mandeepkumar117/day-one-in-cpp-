#include<iostream>
using namespace std;
class cybrom
{
//	public:static void show()
//	{
//		cout<<"\hello";
//	}

//       or
    static int a;
    public:static void show()
    {
    	cout<<a<<"\n";
	}
};
int cybrom::a=10;
int main(){
    cybrom::show(); //dono tarike se call kar sakte hai.object bana ke bhi aur scope resolution se bhi
    
}

