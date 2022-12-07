#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct add
{ int houseno;
  char city[30], state[30];
};

struct emp
{ int empno;
  char name[20],design[30];
  add address;
  float pay;
}e1[5];

void enter()
 {
  for(int i=0;i<=5;i++)
   {cout<<"enter the employee nubmber:"<<endl;
    cin>>e1[i].empno;
    cout<<"Enter employee's home:"<<endl;
    cin>>e1[i].name;
    cout<<"Enter employee designation:"<<endl;
    cin>>e1[i].design;
    cout<<" Enter employees address"<<endl<<"Enter house number";
    cin>>e1[i].address.houseno;
    cout<<"\n enter city";
    cin>>e1[i].address.city;
    cout<<"\n Enter state";
    cin>>e1[i].address.state;
    cout<<"\n enter the salary of employee";
    cin>>e1[i].pay;
cout<<"\n\n\n\n";
   }
 }

void display(int a)
 {
   cout<<"\n Employee no. is"<<e1[a].empno;
   cout<<"\n Employee name is"<<e1[a].name;
   cout<<"\n employee designation is"<<e1[a].design;
   cout<<"\n Employee ka Address is"<<e1[a].address.houseno;
   cout<<"\n city"<<e1[a].address.city<<"\n State:"<<e1[a].address.state;
   cout<<"\n salary of employee is : "<<e1[a].pay;
  }
 int main()
{
  
  int eno;
  enter();
  int flag=1;
  char ch;
 { 
   cout<<"Enter employee no of the workers in information required;";
   cin>>eno;
      for(int i=0;i<5;i++)
 {if(eno==e1[i].empno)
  flag=0;
break;
 }
if(flag!=0)
{cout<<"you have provided the wrong emp no";
}}
cout<<"want to see more info.(YIN):";
cin>>ch;
while(ch=='y'||ch=='Y');
return 0;
getch();}
