#include<iostream>
using namespace std;
int main()
{
//	int num,firstdigit,lastdigit,sum;
//	cout<<"enter number:"<<endl;
//	cin>>num;
//	lastdigit=num%10;
//	firstdigit=num;
//	while(firstdigit>=10)
//	{
//		firstdigit=firstdigit/10;
//	}
//	sum=firstdigit+lastdigit;
//	cout<<"sum of firstdigit and lastdigit="<<" "<<sum<<endl;

    //wap to determine weater a number given by user number is palindrom or not
    
//    int num,temp,sum=0,last;
//    cout<<"Enter test number:";
//    cin>>num;
//    temp=num;
//    while(num>0)
//    {
//    	last=num%10;
//    	sum=sum*10+last;
//    	num=num/10;
//	}
//	if(temp==sum)
//	{
//		cout<<"palindrom"<<endl;
//	}
//	else
//	{
//		cout<<"not palindrom";
//	}
//    


   
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    if (n > 0) 
//	{
//        for (char c = 'A'; c <= 'Z'; ++c)
//		 {
//            cout << c << " ";
//        }
//         cout << endl;
//    } 
//	else
//	 {
//        cout << "The number is not positive." << endl;
//    }
//
//    return 0;

//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    if (n < 0) 
//	{
//        for (char c = 'Z'; c >= 'A'; --c)
//		 {
//            cout << c << " ";
//        }
//         cout << endl;
//    } 
//	else
//	 {
//        cout << "The number is  positive." << endl;
//    }
//
//    return 0;
//


     int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) 
	{
        for (char c = 'A'; c <= 'Z'; c++)
		 {
		 	if(c!='A' && c!='I' && c!='E' && c!='O' && c!='U' )
            cout << c << " ";
        }
         cout << endl;
    } 
	else
	 {
        cout << "The number is  positive." << endl;
    }

    return 0;




}
 
