//feiend function->we can access private data member of any class outside of it with helpof friend function.


#include<iostream>
using namespace std;
class frnd1
{
	public:int notes=1000;
	public:void show()
	{
		cout<<notes;
	}
};
int main(){
    frnd1 f;
    cout<<f.notes;
    f.show();
}

