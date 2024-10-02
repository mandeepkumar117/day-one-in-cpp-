   #include<iostream>
using namespace std;
int main()
{
	int num,sum=0,last,temp;
	cout<<"enter the test number:"<<endl;
	cin>>num;
	temp=num;
  // 121
	while(num>0)
	{
		last=num%10;//121%10 =1
		sum=sum*10+last;  // 
		num=num/10;
	}

	if(temp==sum)
	{
		cout<<"palindrom";
	}
	else
	{
		cout<<"not palindrom";
	}
}
