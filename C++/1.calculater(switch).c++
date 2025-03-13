#include<iostream>

using namespace std;
int main()
{
	char c;
	int a,b,d;
	cout<<"Enter a two number = ";
	cin>>a>>b;
	cout<<"Enter what do you want = ";
	cin>>c;
	switch(c)
	{
		case '+':cout<<"Your choice is addition"<<endl;
		          d=a+b;
		          cout<<a<<" + "<<b<<" = "; 
		          break;
		case '-':cout<<"Your choice is substaction"<<endl;
			  	d=a-b;
			  	cout<<a<<" - "<<b<<" = ";
			  	break;
	    case '%':cout<<"Your choice is Divide"<<endl;
	    		  d=a%b;
	    		  cout<<a<<" % "<<b<<" = ";
	    		  break; 
	    case '*':cout<<"Your choice is mutiply"<<endl;
	    		  d=a*b;
	    		  cout<<a<<" * "<<b<<" = ";
	    		  break;
	    default:cout<<" Invalid ";
	}
	cout<<d;
}
