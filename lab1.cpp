#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"input:"<<endl;
   cin>>n;
   again: cout<<n<<endl;  
   if(n!=1)   
   {	  
	  
	  if(n%2==1)n=n*3+1;
      else n=n/2;
      goto again;
    }
   return 0;


}
