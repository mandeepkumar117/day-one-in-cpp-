#include<iostream>
using namespace std;
int main()
{
 float basic,gross,net_salary;
 float ta=0.1;
 float pf=0.078;
 float da=500;
 cout<<"Enter basic salary:"<<endl;
 cin>>basic;
 ta=ta*basic;
 pf=pf*basic;
 gross=basic+ta+da;
 net_salary=gross-pf;
 cout<<"gross salary is:"<<" "<<gross<<endl;
 cout<<"net salary is:"<<" "<<net_salary;
 	
}
