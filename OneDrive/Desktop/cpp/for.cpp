//loop->repeation of some set of statemenat again and again until some number of timr or until some spacific condition has reached.

//     iteration(cycle) dependent                               condition dependent
//         number                                                    condition
//         certain                                                   uncertain
//         ex:
//         bank minimum bal>0-->withdrawl                           multiplication table
//         for loop                                                 while do while


//          70-80% question for,while,do-while
//          spacific question---->while,do-while



//2nd classification on the basis of entry
//   entry conatrol loop                                            exit
//   entry point check                                              exit point check
//   for,while                                                      do-while


//wap to display n natural starting from 1.

//   for(initialized_control_variable;test_expression;updation){
 
 
//      body define


//}

                                       
                                                        
                                          
                   
                   


    # include<iostream>
     using namespace std;
     int main()
     {
//     	int i,n;
//     	cout<<"enter number:"<<endl;
//     	cin>>n;
//     	for(i=0;i<=n;i++)
//     	{
//     		cout<<"loop executed"<<" "<<i<<" "<<"time"<<endl;
//		 }


//         starting value-ending value
//           reverse

          
//    int i,n;
//    cout<<"enter starting number:"<<endl;
//    cin>>i;
//    cout<<"enter ending number:"<<endl;
//    cin>>n;
//    for(i=i;i<=n;i++)
//    {
//    	cout<<i<<endl;
//	}


//    int i,n;
//    cout<<"enter starting number:"<<endl;
//    cin>>i;
//    cout<<"enter ending number:"<<endl;
//    cin>>n;
//    for(n=n;i>=n;i--)
//    {
//    	cout<<i<<endl;
//	}
//              
              
//wap to find the sum of n number and display result


     // int n,num,sum=0;
	  //cout<<"Enter range:"<<endl;
	  //cin>>n;
	 // for(int i=0;i<=n;i++)
	 // {
//	  	cout<<"Enter a number:"<<endl;
//	  	cin>>num;
        //cout<<i;
//        susum+num;
	  	//sum=sum+i;
	//}  
	//cout<<"summation:"<<sum<<" "<<endl;      


//wap to to find number is even odd and count how many 
//number is even or odd
      
//      int n,num,ecount=0,ocount=0,c1=0,c2=0;
//      cout<<"enter range:"<<endl;
//      cin>>n;
//      for(int i=0;i<=n;i++)
//      {
//      	cout<<"enter a number:"<<endl;
//      	cin>>num;
//      	if(num%2==0)
//      	{ 
//		    c1++;
//      		ecount=ecount+num;
//		  }
//		  else
//		  { 
//		    c2++;
//		  	ocount=ocount+num;
//		  }
//		  }
//		  cout<<"even number is"<<c1<<" "<<"and"<<endl;
//		  cout<<"Even summation"<<ecount<<endl;
//		  cout<<"odd number is"<<c2<<" "<<"and"<<endl;
//		  cout<<"odd summation"<<ocount<<c2<<endl;
//		  cout<<"summation"<<ecount+ocount<<endl;


//wap to find how many even number is there in given range

//      int num,c1=0;
//      cout<<"Enter a range:"<<endl;
//      cin>>num;
//      for(int i=0;i<=num;i++)
//      {
//      	//cout<<i;
//      	if(i%2==0)
//      	{
//      		cout<<i<<" ";
//      		c1++;
//            
//      		
//		  }
//       }
//      cout<<"the even nuber is= "<<c1; 

//table print


//      int i,n;
//      cout<<"Enter multiplication number:"<<endl;
//      cin>>n;
//      for(i=1;i<=10;i++)
//      {
//      	int table=n*i;
//      	cout<<"table="<<n<<" * "<<i<<"="<<table<<endl;
//	  }

//      int i,n;
//      cout<<"Enter number:"<<endl;
//      cin>>n;
//      for(i=10;i>=1;i--)
//      {
//      	int table=n*i;
//      	cout<<"table="<<n<<" * "<<i<<"="<<table<<endl;
//	  }
   
// wap  print a to z
   
//      for(char i='a';i<='z';i++)
//      {
//      	cout<<i<<endl;
//	  }
      
       
//wap to print z to a

//     for(char i='z';i<='a';i--)
//     {
//     	cout<<i<<endl''
//	 }


//   Write a program to find sum of all natural numbers between 1 to n

//      int n,sum=0;
//      cout<<"Enter range number:"<<endl;
//      cin>>n;
//      for(int i=1;i<=n;i++)
//      {
//      	cout<<i<<endl;
//      	sum=sum+i;      	
//	  }
//	  cout<<sum<<endl;


//Write a program to find sum of all even numbers between 1 to n

    int n,esum=0,c1=0,osum=0;
    cout<<"enter range:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    { 
      if(i%2==0 && n%2==0)
	  {
	  	cout<<i<<endl;
	  	c1++;
	  	esum=esum+i;
	   } 
	   
	 else   if(i%2!=0 && n%2!=0)
	  {
	  	cout<<i<<endl;
	  	osum=osum+i;
	   } 
	   
	 
		
	}
	cout<<"even number is= "<<c1<<endl;
	if(n%2==0)
	cout<<"sum of even number="<<esum<<endl;
	else	
   cout<<"sum of odd number="<<osum<<endl;	
    
    
    
 }

            
              










     
