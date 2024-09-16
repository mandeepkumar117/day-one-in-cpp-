//leteral->which have own meaning.example:-float leteral,int leteral etc,.which can not change
#include<iostream>
using namespace std;
int main(){
//	int a =023;//that is represent octal leteral.starting 0(zero) represent octal
//  int  a= 0x38;//that is represent hexa decimal.x represet hexadecimal
//    float f=93.21e2;//that is represent exponential leteral.e is exponential (10^2)
//    char c[]="joy";
//    cout<<sizeof(c)<<" ";
//  cout<< a;
//  if(2 && 3);
//	{
//    	cout<<"ok";
//	}
//	else{
//		cout<<"bye";
//	}

//decrement

//   int a=1;
//   if(a--,a){
//   	cout<<"ok";
//   	
//   }
//   else{
//   	cout<<"bye";
//   }

//   int num=0, table=0;
//   cout<<"enter numbre";
//   cin>>num;
//   int i=1;
//   do{
//   	table = num * i;
//   	cout<<table<<" ";
//   	i++;
//   }
//   while(i<=10);


//    int num=1;
//    do
//    {
//    	if(num%2){
//    		cout<<num<<" \n";
//		}
//		else
//		{
//			cout<<num<<" \n";
//		}
//		num++;
//	}
//	while(num<=10);

//wap to display the sum of the value s btween 1 to 10
//int num =1;
//int sum=0;
//do{
//	sum = sum + num;
//	num++;
//}
//while(num<=10);
//cout<<"sum is ="<<sum<<endl;



//wap to generate the factorial of any number
//wap to generete power
//wap to find out how many digits exits in a given number


//q(1)
//
//int i=1;
//int n;
//cout<<"enter test number";
//cin>>n;
//double factorial=1;
//while(i<=n){
//	factorial=factorial * i;
//	i++;
//	
//}
//cout<<"factorial of number"<<factorial<<endl;


//int b,p,power=1;
//cout<<"Enter base:"<<endl;
//cin>>b;
//cout<<"Enter exponet:"<<endl;
//cin>>p;
//int i=power;
//while(i<=p){
//	power=power * b;
//	i++;
//	
//}
//	cout<<b<<"^"<<p<<" = "<<power<<endl;


//    int n;
//    cout << "Enter a number: " << endl;
//    cin >> n;
//    if (n <= 1) {
//        cout << "Not a prime" << endl;
//        return 0;
//    }
//
//    bool is_prime = true;
//
//    for (int i = 2; i <= n / 2; i++) {
//        if (n % i == 0) {
//            is_prime = false;
//            cout << "Divisible by " << i << endl;  
//            break;
//        }
//    }
//
//    if (is_prime)
//        cout << n << " is a prime number" << endl;
//    else
//        cout << n << " is not a prime number" << endl;
//
//    return 0;
//}



int n, i=1,flag=0;
cout<<"enter any valid no genrate sqr root\n";
cin>>n;
while(i <= n/2){
	if(i * i == n){
		flag=1;
		break;
	}
	i++;
}
if(flag==1){
	cout<<i;
}
else{
	cout<<"not found";
}
cout<<"\ni="<<i<<endl;


	
}

