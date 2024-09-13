# include <iostream>
using namespace std;


int main(){
//	int n,sum=0,last;
//	cout<<"enter";
//	cin>>n;
//		int c=0;
//	while(n>0){
//	
//		last=n%10;
//		if(c==0){
//			cout<<last<<'+'<<" ";
//			sum=sum+last;
//			c=3;
//		}
//		c--; //c=0
//		
//		n=n/10;
//		
//		
//	}
// cout<<sum;



//    int n;
//    char ch;
//    cout<<"Enter a number:"<<endl;
//    cin>>n;
//    if(n>0)
//    {
//    	char ch='a';
//    	while( ch<='z')
//    	{
//    		cout<<ch<<" ";
//    		ch++;
//		}
//		cout<<endl;
//	}
//	else
//	{
//		cout<<"no is negative";
//	}



//      int n;
//      char ch;
//      cout<<"Enter a number:"<<endl;
//      cin>>n;
//      if(n>0)
//      {
//   	    
//    	 for(ch='a';ch<='z';ch++)
//    	 {
//    		cout<<ch<<" ";
//    		
//	     }
//		  cout<<endl;
//	   }
//	  else
//	  {
//		cout<<"no is negative";
//	}
//	


//bu usin for loop print in reverse

//       int n;
//      char ch;
//      cout<<"Enter a number:"<<endl;
//      cin>>n;
//      if(n>0)
//      {
//   	    
//    	 for(ch='z';ch>='a';ch--)
//    	 {
//    		cout<<ch<<" ";
//    		
//	     }
//		  cout<<endl;
//	   }
//	  else
//	  {
//		cout<<"no is negative";
//	}
//	


//wap to print vowel if inter 0

//      int n;
//      char ch;
//      cout<<"Enter a number:"<<endl;
//      cin>>n;
//      if(n==0)
//      {
//   	    
//    	 for(ch='a';ch<='z';ch++)
//    	 {
//    	 	
//    		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//    		{
//    			cout<<ch<<" ";
//			}
//	     }
//		  cout<<endl;
//	   }
//	  else
//	  {
//		cout<<"no is negative";
//	}


//question
//  if n is positive,display msg "repeat" n times in new line.
//if n is negative,display msg "over"  1 time

  
//      int n;
//      char ch;
//      cout<<"Enter a number:"<<endl;
//      cin>>n;
//      if(n>0)
//      {
//   	    
//    	 for(ch=0;ch<=n;ch++)
//    	 {
//    	   cout<<"repeat"<<" ";	
//	     }
//	   }
//	  else
//	  {
//		cout<<"over";
//	}
   
   
      int n;
      cout<<"Enter range:"<<endl;
      cin>>n;
      for(int i=0;i<=n;i++)
      {
      	if(i%5==0 || i%7==0)
      	{
      		cout<<i<<" ";
		  }
	  }
   
    


	
//	int n,sum=0;
//	cout<<"Enter number:"<<endl;
//	cin>>n;
//	for(int i=0;i<=n;i++)
//	{
//		if(i<n)
//		{
//			cout<<'('<<i<<'*'<<i<<')'<<"+";
//		}
//		else
//		{
//			cout<<'('<<i<<'*'<<i<<')'<<"=";
//			sum=sum+i*i;
//		}
//	}
//	cout<<sum;


//     double n,sum=0;
//     cout<<"Enter number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//     	if(i<n)
//     	{
//     		cout<<'('<<1<<'/'<<i<<')'<<"+";
//		 }
//		 else
//		 {
//		 	cout<<'('<<1<<'/'<<i<<')'<<"=";
//		 
//		 }
//		 	sum=sum+1.0/i;
//	 }
//	 cout<<sum;




//      double n,sum=0;
//     cout<<"Enter number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//     	if(i<n)
//     	{
//     		cout<<'('<<1<<'/'<<i<<')'<<"+";
//		 }
//		 else
//		 {
//		 	cout<<'('<<1<<'/'<<i<<')'<<"=";
//		 
//		 }
//		 	sum=sum+i/i;
//	 }
//	 cout<<sum;

}
