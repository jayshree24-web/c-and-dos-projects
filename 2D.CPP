

#include<iostream.h>
#include<process.h>
#include<conio.h>

void sum_prod_row(int A[10][10],int r,int c);
void sum_prod_col(int A[10][10],int r,int c);
void sum_diagonal_mid(int A[10][10],int r,int c);
void interchange(int A[10][10],int r,int c);
void display(int A[10][10],int r,int c);
void display_triangle(int A[10][10],int r,int c);

void main()
{
 int A[10][10],B[10][10],r, c, i, j;
 cout<<"\n Enter no of rows::";  cin>>r;
 cout<<"\n Enter No of columns::";  cin>>c;
 cout<<"\n Enter array elements::";
 for(i=0;i<r;i++)
 {    cout<<"\n";
  for(j=0;j<c;j++)
  {
	cout<<"\tA["<<i<<"]["<<j<<"]=";
	cin>>A[i][j];
  }
}
display(A,r,c);

int ch; char opt='y';
do
{
cout<<"\n MENU FOR 2D OPERATIONS";
cout<<"\n 1.SUM & PRODUCT OF ROW ELEMENTS";
cout<<"\n 2.SUM & PRODUCT OF COLUMN ELEMENTS";
cout<<"\n 3.SUM OF MIDDLE ROW & COLUMN ELEMENTS AND SUM OF DIAGONAL ELEMENTS";
cout<<"\n 4.DISPLAY UPPER/LOWER LEFT/RIGHT DIAGONAL TRIANGLES";
cout<<"\n 5.INTERCHANGE OF 1ST & LAST ROW & 1ST & LAST COLUMN ELEMENTS ";
cout<<"\n 6. EXIT";
cout<<"\n ENTER UR CHOICE::";
cin>>ch;
switch(ch)
{
case 1: clrscr(); display(A,r,c);
		  cout<<"\n********************************";
		  cout<<"\n SUM & PRODUCT OF ROW ELEMENTS";
		  cout<<"\n********************************";
		  sum_prod_row(A,r,c);
		  break;
case 2: clrscr(); display(A,r,c);
		  cout<<"\n********************************";
		  cout<<"\n SUM & PRODUCT OF COLUMN ELEMENTS";
		  cout<<"\n********************************";
		  sum_prod_col(A,r,c);
		  break;
case 3:  clrscr(); display(A,r,c);
cout<<"\n******************************************************";
 cout<<"\n SUM OF MIDDLE ROW & COLUMN ELEMENTS AND SUM OF DIAGONAL ELEMENTS";
cout<<"\n******************************************************";
		  sum_diagonal_mid(A,r,c);
		  break;
case 4:  clrscr(); display(A,r,c);
	 cout<<"\n**************************************************";
          cout<<"\n DISPLAY UPPER/LOWER LEFT/RIGHT DIAGONAL TRIANGLES";
	cout<<"\n**************************************************";
		  display_triangle(A,r,c);
		  break;
case 5: clrscr();
cout<<"\n*****************************************************";
cout<<"\n INTERCHANGE OF 1ST & LAST ROW & 1ST & LAST COLUMN ELEMENTS";
cout<<"\n********************************************************";
		  cout<<"\n Array before interchaging the elements";
		  display(A,r,c);
		  interchange(A,r,c);		  break;
case 6: exit(0);
}
cout<<"\n Do u want to continue::";
cin>>opt;
}while(opt=='y' || opt=='Y');
}

void display(int A[10][10],int r,int c)
{     int i,j;
for(i=0;i<r;i++)
 {
       cout<<"\n";
       for(j=0;j<c;j++)
 	     cout<<"\t"<<A[i][j];
   }	
}

void sum_prod_row(int A[10][10],int r,int c)
{  int sum,p,i,j;
 for(i=0;i<r;i++)
 {
	sum=0,p=1;
      for(j=0;j<c;j++)
     {
	  sum=sum+A[i][j];
	   p=p*A[i][j];
     }
    cout<<"\n\n Sum of Row ["<<i+1<<"] is="<<sum;
     cout<<"\n\n Product of Row ["<<i+1<<"] is="<<p;
 }
}


void sum_prod_col(int A[10][10],int r,int c)
{  int sum,p,i,j;
 for(i=0;i<c;i++)
 {	sum=0,p=1;
  	for(j=0;j<r;j++)
    {	 sum=sum+A[j][i];	
                  p=p*A[j][i];    }
      
       cout<<"\n\n Sum of Column ["<<i+1<<"] is="<<sum;
       cout<<"\n\n Product of Column ["<<i+1<<"] is="<<p;
    }
}

void sum_diagonal_mid(int A[10][10],int r,int c)
{
 int sum1=0,sum2=0,midr=0,midc=0,i,j;
 int midrow=r/2,midcol=c/2;
 for(i=0;i<r;i++)
 {
	for(j=0;j<c;j++)
  {
	if(i==j)
	 sum1=sum1+A[i][j];
	if(i+j==c-1)
	sum2=sum2+A[i][j];
	if(j==midcol)
	midc=midc+A[i][j];
	if(i==midrow)
	midr=midr+A[i][j];
  }
}
  cout<<"\n\n Sum of left diagonal elements is="<<sum1;
  cout<<"\n\n Sum of right diagonal elements is="<<sum2;
  cout<<"\n\n Sum of middle row elements is="<<midr;
  cout<<"\n\n Sum of middle column elements is="<<midc;
}

void interchange(int A[10][10],int r,int c)
{
  int temp;
 for(int i=0;i<r/2;i++)
 {
  for(int j=0;j<c;j++)
  {
	temp=A[i][j];
	A[i][j]=A[r-1-i][j];
	A[r-1-i][j]=temp;
  }
 }
 cout<<"\n Array after interchaging of 1st & last row is ";
 display(A,r,c);
 for(i=0;i<r;i++)
 {
  for(int j=0;j<c/2;j++)
  {
	temp=A[i][j];
	A[i][j]=A[i][c-1-j];
	A[i][c-1-j]=temp;
  }
 }
 cout<<"\n Array after interchaging of 1st & last column is ";
 display(A,r,c);
}

void display_triangle(int A[10][10],int r,int c)
{
 int i,j;
 char ch=' ';
 cout<<"\n UPPER RIGHT DIAGONAL ELEMENTS";
  for(i=0;i<r;i++)
  {
cout<<"\n";
	for(j=0;j<c;j++)
	{
	     if(i<=j)
	        cout<<"\t"<<A[i][j];
	    else
	        cout<<"\t";
	}
  }

  cout<<"\n LOWER RIGHT DIAGONAL ELEMENTS";
  for(i=0;i<r;i++)
 {
	cout<<"\n";
	for(j=0;j<c;j++)
          {
	    if(i+j>=c-1)
	        cout<<"\t"<<A[i][j];
	   else
	        cout<<"\t";
           }
 }

  cout<<"\n UPPER LEFT DIAGONAL ELEMENTS";
  for(i=0;i<r;i++)
 {            	cout<<"\n";
	for(j=0;j<c;j++)
         {
	   if(i+j<=c-1)
	      cout<<"\t"<<A[i][j];
         }
 }

  cout<<"\n LOWER LEFT DIAGONAL ELEMENTS";
     for(i=0;i<r;i++)
    {                        	cout<<"\n";
	for(j=0;j<c;j++)
         {
	   if(i>=j)
	      cout<<"\t"<<A[i][j];
         }
     }

}

