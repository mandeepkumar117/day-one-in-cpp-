//static function->static function is an attribute of a class .ansd it can be accessed with or without using of an object
#include<iostream>
class cybrom
{
	public:
		static void show()
		{
			cout<<"static function\n";
		}
};
using namespace std;
int main(){
    cybrom::show();
}

