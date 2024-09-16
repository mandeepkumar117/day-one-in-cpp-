// wap to create a class named fruit having attribute :name,color ,taste ,shape
//having methods:display(),display taste();
//note->class is mainly irlogical intity where as object is real intity
#include<iostream>
using namespace std;
class Fruit{
	public:
		string name;
		string color;
		string taste;
		string shape;
		int price;
		void insert(){
			cout<<"Enter fruit name: "<<endl;
			cin>>name;
			cout<<"Enter fruit color: "<<endl;
			cin>>color;
			cout<<"Enter taste: "<<endl;
			cin>>taste;
			cout<<"Enter shape: "<<endl;
			cin>>shape;
			cout<<"Enter fruit price: "<<endl;
			cin>>price;
		}
		void display(){
				cout<<"fruit name is: "<<name<<endl;
				cout<<"fruit color is: "<<color<<endl;
				cout<<"fruit taste is: "<<taste<<endl;
				cout<<"fruit shape is: "<<shape<<endl;
				cout<<"fruit price is: "<<price<<endl;
		}
		void update(){
			cout<<"before price is: "<<price<<endl;
			int updt;

			cout<<"Enter modify price:"<<endl;
			cin>>updt;
			price=updt;
			cout<<"modified price is: "<<price<<endl; 
			
		}
			
};
int main(){
    Fruit obj;
      obj.insert();
      obj.display();
      obj.update();
  
}

