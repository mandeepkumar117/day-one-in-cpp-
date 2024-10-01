 //conditional statement(if else statement)


//construct(program flow)
//(1).sequential
//(2).selective(if else)
//(3).iterative


#include<iostream>
using namespace std;
int main()
{
//	int age;
//	cout<<"enter age"<<endl;
//	cin>>age;
//	char gender;
//	cout<<"enter your gender \"m\" for male  \"f\" forn female":<<endl;
//	cin>>gender; 
//	if(age>=21 && gender=='m')
//	{
//		cout<<"u r eligible for marrige"<<endl;
//	}
//	else{
//		cout<<"u r not eligible for marrige"<<endl;
//	}
//	if(gender>=18 && gender=='f')
//	{
//		cout<<"u r eligible for marrige"<<endl;
//	}
//	else{
//		cout<<"u r eligible for marrige"<<endl;
//	}


//    int num;
//    cout<<"enter a number :"<<endl;
//    cin>>num;
//    if(num>0)
//    {
//    	cout<<"number is possitive"<<endl;
//    	
//	}
//	else if(num<0)
//	{
//		cout<<"number is negative"<<endl;
//		
//	}
//	else{
//		cout<<"number is zero";
//	}



//   int num,num1,num2;
//   cout<<"Enter first number:"<<endl;
//   cin>>num;
//   cout<<"Enter second number:"<<endl;
//   cin>>num1;
//   cout<<"Enter third number:"<<endl;
//   cin>>num2;
//   if(num>num1)
//   {
//   	cout<<" number one is greater:"<<endl;
//   }
//   else if(num1>num2)
//   {
//   	cout<<"num1 is greater"<<endl;
//   }
//   else if(num2>num)
//   {
//   	cout<<"num2 is greater"<<endl;
//   }
//   else{
//   	cout<<"number is smaller"<<endl;
//   }


//    int num;
//    cout<<"Enter purchase quantity:"<<endl;
//    cin>>num;
//    if(num>1000)
//    {
//    	num=num-100;
//    	cout<<"your discount price is:"<<num<<" "<<endl;
//	}
	
	
	
//    int quantity;
//    cout << "Enter the quantity: ";
//    cin >> quantity;
//    int unitCost = 100;
//    int totalCost = quantity * unitCost;
//    if (totalCost >= 1000) 
//	    {
//        float discount = 0.2 * totalCost;
//        totalCost =totalcost- discount;
//       }
//        else if(totalCost<1000)
//      {
//    	float discount=0.1*totalcost;
//  	totalCost=totalCost-discount;
//     }
//
//        cout << "Total cost: " << totalCost << " (after discount if applicable)" << endl;
//
//        return 0;

        
//     int m;
//    cout << "Enter an integer value for m: ";
//    cin >> m;
//
//    if (m > 0) {
//        cout << "ok" << endl;
//    } else if (m < 0) {
//        cout << "bye" << endl;
//    } else {
//        cout << "The value of m is 0." << endl;
//    }
//
//    return 0;


//    char ch;
//    cout<<"Enter any character:"<<endl;
//   cin>>ch;
//    if(ch=='a' || ch=='A')
//    {
//    	cout<<"character is vowel"<<endl;
//	}
//	else if(ch=='e' || ch=='E')
//	{
//		cout<<"character is vowel"<<endl;
//	}
//	else if(ch=='i' || ch=='I')
//	{
//		cout<<"character is vowel"<<endl;
//	}
//	else if(ch=='o' || ch=='O')
//	{
//		cout<<"character is vowel"<<endl;
//	}
//	else if(ch=='u' || ch=='U')
//	{
//		cout<<"character is vowel"<<endl;
//	}
//	else
//	{
//		cout<<"character is consonant"<<endl;
//	}


//    char character;
//    cout<<"Enter any character:"<<endl;
//    cin>>character;
//    if(character>='a' && character<='z')
//    {
//    	cout<<"charcter is lower case"<<endl;
//	}
//	else if(character>='A' && character<='Z')
//	{
//		cout<<"character is upper case"<<endl;
//	}
//	else
//	{
//		cout<<"this is another character"<<endl;
//	}
	
	
//	double year,salary;
//	string name;
//	cout<<"ennter your name,year of service and salary:";
//	cin>>name>>year>>salary;
//	cout<<"hello "<<name<<endl;
//	if(year>5)
//	{
//		double bonus=salary* 0.05;
//		cout<<"u got bouns of rs "<<bonus<<endl;
//		cout<<"net salary: "<<bonus+salary;
//		
//	}
//	else
//	{
//		cout<<"you are not eligible for any bonus\n";
//		cout<<"net salary: "<<salary;
//	}




//    int length,breadth,square;
//    cout<<"Enter length:"<<endl;
//    cin>>length;
//    cout<<"Enter breadth:"<<endl;
//    cin>>breadth;
//    square=length*breadth;
//    cout<<square<<endl;
//    
//    if(length==breadth)
//    {
//    	cout<<"this is square:"<<endl;
//	}
//	 if(length>breadth){
//		cout<<"length is greater"<<endl;
//	}
//     if(breadth>length)
//	{
//		cout<<"breadth is greater"<<endl;
//	}
//	else
//	{
//		cout<<"this is rectangle"<<endl;
//	}


//    int a,b,c;
//    cout<<"Enter a first number:"<<endl;
//    cin>>a;
//    cout<<"Enter a second number:"<<endl;
//    cin>>b;
//    cout<<"Enter a third number:"<<endl;
//    cin>>c;
//    if(a<b && a<c)
//    {
//    	cout<<"a is smaller"<<endl;
//    	if(b<c)
//	{
//		cout<<"b is 2nd smaller"<<endl;
//	}
//	else if(c<b)
//	{
//		cout<<"c is 2nd smaller"<<endl;
//	}
//	else{
//		cout<<"b and c are same";
//	}
//	}
//	else  if(b<a && b<c)
//    {
//    	cout<<"b is smaller"<<endl;
//    	if(a<c)
//	{
//		cout<<"a is 2nd smaller"<<endl;
//	}
//	else if(c<a)
//	{
//		cout<<"c is 2nd smaller"<<endl;
//	}
//	else{
//		cout<<"a and c are same";
//	}
//	}
//	else  if(c<a && c<b)
//    {
//    	cout<<"c is smaller"<<endl;
//    	if(a<b)
//	{
//		cout<<"a is 2nd smaller"<<endl;
//	}
//	else if(a<b)
//	{
//		cout<<"b is 2nd smaller"<<endl;
//	}
//	else{
//		cout<<"a and b are same";
//	}
//	}
//	else{
//		cout<<"all numbers are equals";
//	}

    
//   int marks,marks1,marks2,marks3,marks4,total,average;
//   char grade;
//   cout<<"Eenter five subject marks:"<<endl;
//   cin>>marks>>marks1>>marks2>>marks3>>marks4;
//   total=marks+marks1+marks2+marks3+marks4;
//   average=total/5;
//   cout<<"average marks is:"<<average<<endl;
//    if (average < 25) {
//        cout<<"grade = 'F'";
//    } else if (average >= 25 && average < 45) {
//        cout<<"grade = 'E'";
//    } else if (average >= 45 && average < 50) {
//        cout<<"grade = 'D'";
//    } else if (average >= 50 && average< 60) {
//       cout<< "grade = 'C'";
//    } else if (average >= 60 && average < 80) {
//        cout<<"grade = 'B'";
//    } else {
//        grade = 'A';
//    }
//    
   
   
//     leap year or not

//      int year;
//      cout<<"Enter a year:"<<endl;
//      cin>>year;
//      if((year%4==0 && year%100!=0) || year%400==0)
//      {
//      	cout<<"year is leap year"<<endl;
//      	
//	  }
//	  else
//	  {
//	  	cout<<"year is not leap year"<<endl;
//	  }


//     int n,r;
//     cout<<"Enter any number"<<endl;
//     cin>>n;
//     while(n>0)
//     {
//     	r=n%10;
//     	cout<<n<<endl;
//     	n=r%10;
//     	cout<<n<<endl;
//	 }

//Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot


//       int temp;
//	   cout<<"Enter tempreture"<<endl;
//	   cin>>temp;
//	   if(temp<0)
//	   {
//	   	cout<<"freezing weather"<<endl;
//		} 
//		else if(temp>0 && temp<10)
//		{
//			cout<<"very cold wether"<<endl;
//		}
//		else if(temp>10 && temp<20)
//		{
//			cout<<"cold weather"<<endl;
//		}
//		else if(temp>20 && temp<30)
//		{
//			cout<<"normal in tempreture"<<endl;
//		}
//		else if(temp>30 && temp<40)
//		{
//			cout<<"its hot"<<endl;
//		}
//		else if(temp>=40)
//		{
//			cout<<"very hot"<<endl;
//		}
//		else
//		{
//			cout<<"out of tempreture";
//		}


//Write a  program to determine eligibility for admission to a professional course based on the following criteria:
//Marks in Maths >=65
//Marks in Phy >=55
//Marks in Chem>=50
//Total in all three subject >=190


//      int phy,che,math ,total;
//      cout<<"Enter three subject marks:"<<endl;
//      cin>>phy>>che>>math;
//      if(phy>=55)
//      {
//        if(che>=50)
//	    {
//	  	   if(math>=65)
//	    {
//	    	total = phy+che+math;
//	    	if(total>=190){
//	    		cout<<"you are eligible";
//			}
//			else{
//				cout<<"you are not eligible, total marks are less";
//			}
//	    }
//	    else{
//	    	cout<<"maths marks are below 65";
//		}
//	    }
//	    else{
//	    	cout<<"chemistry marks are below 50";
//		}
//	   
//	  }
//	  else{
//	  	cout<<"physics marks are below 55";
//	  }


     double salary,year,bonus;
     string name;
     cout<<"Enter name,year of job,salary:"<<endl;
     cin>>name>>year>>salary;
     cout<<"hello"<<name<<endl;
     if(year>=5)
     {
//     	bonus1=4.0/100*salary;
     	bonus=0.4*salary;
     	cout<<"your bonus is = "<<bonus<<endl;
     	double net_salary=salary+bonus;
     	cout<<"your net salary is=  "<<net_salary<<endl;
	 }
	 else
	 {
	 	cout<<"you dont have to get bonus"<<endl;
	 }

	  
}



     
